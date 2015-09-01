/*
 * Copyright (c) 2001 Wichert Akkerman <wichert@cistron.nl>
 * Copyright (c) 2004-2015 Dmitry V. Levin <ldv@altlinux.org>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. The name of the author may not be used to endorse or promote products
 *    derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifdef HAVE_CONFIG_H
# include "config.h"
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <asm/ioctl.h>

struct ioctlent {
	const char *info;
	const char *name;
	unsigned int dir;
	unsigned int type_nr;
	unsigned int size;
};

static int
is_prefix(const char *s1, const char *s2)
{
	size_t len = strlen(s1);

	if (len > strlen(s2))
		return 0;
	return !memcmp(s1, s2, len);
}

static int
compare_name_info(const void* a, const void* b)
{
	int rc;

	const char *name1 = ((struct ioctlent *) a)->name;
	const char *name2 = ((struct ioctlent *) b)->name;
	const char *info1 = ((struct ioctlent *) a)->info;
	const char *info2 = ((struct ioctlent *) b)->info;

	rc = strcmp(name1, name2);
	if (rc)
		return rc;

	/*
	 * exception from lexicographical order:
	 * "asm/" < "asm-generic/"
	 */
	if (is_prefix("asm/", info1) &&
	    is_prefix("asm-generic/", info2))
		return -1;

	if (is_prefix("asm/", info2) &&
	    is_prefix("asm-generic/", info1))
		return 1;

	return strcmp(info1, info2);
}

static unsigned int
code(const struct ioctlent *e)
{
	return e->type_nr |
		(e->size << _IOC_SIZESHIFT) |
		(e->dir << _IOC_DIRSHIFT);
}

static int
compare_code_name(const void* a, const void* b)
{
	unsigned int code1 = code((struct ioctlent *) a);
	unsigned int code2 = code((struct ioctlent *) b);
	const char *name1 = ((struct ioctlent *) a)->name;
	const char *name2 = ((struct ioctlent *) b)->name;
	return (code1 > code2) ?
		1 : (code1 < code2) ? -1 : strcmp(name1, name2);
}

static void
ioctlsort(struct ioctlent *ioctls, size_t nioctls)
{
	size_t i;

	qsort(ioctls, nioctls, sizeof(ioctls[0]), compare_name_info);

	for (i = 1; i < nioctls; ++i)
		if (!strcmp(ioctls[i-1].name, ioctls[i].name)) {
			/*
			 * If there are multiple definitions for the same
			 * name, keep the first one and mark all the rest
			 * for deletion.
			 */
			ioctls[i].info = NULL;
		}

	for (i = 1; i < nioctls; ++i)
		if (!ioctls[i].info) {
			/*
			 * Change ioctl code of marked elements
			 * to make them sorted to the end of array.
			 */
			ioctls[i].dir =
			ioctls[i].type_nr =
			ioctls[i].size = 0xffffffffu;
		}

	qsort(ioctls, nioctls, sizeof(ioctls[0]), compare_code_name);

	puts("/* Generated by ioctlsort. */");
	for (i = 0; i < nioctls; ++i) {
		if (!ioctls[i].info) {
			/*
			 * We've reached the first element marked for deletion.
			 */
			break;
		}
		if (i == 0 || code(&ioctls[i-1]) != code(&ioctls[i]) ||
		    !is_prefix(ioctls[i-1].name, ioctls[i].name))
			printf("{ \"%s\", %#010x },\n",
				ioctls[i].name, code(ioctls+i));
	}
}

static struct ioctlent ioctls[] = {
#ifdef IOCTLSORT_INC
# include IOCTLSORT_INC
#else
# include "ioctls_arch.h"
# include "ioctls_inc.h"
#endif
};

int
main(void)
{
	ioctlsort(ioctls, sizeof(ioctls) / sizeof(ioctls[0]));
	return 0;
}
