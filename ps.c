/**
 *   author       :   丁雪峰
 *   time         :   2015-07-13 14:44:08
 *   email        :   fengidri@yeah.net
 *   version      :   1.0.1
 *   description  :
 */
#include <stdio.h>
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>

#include <sys/types.h>
#include <ctype.h>
#include <dirent.h>
#include <stdbool.h>
#include <string.h>
#include <malloc.h>
#include <fcntl.h>

struct proc{
    char name[50];
    u_int pid;
};

bool match_fd(const char *pid, const char *fd)
{
    char fd_dir[50];
    char fd_path[50];
    char link_path[50];
    int len;
    DIR *dir;
    struct dirent *ptr;

    len = snprintf(fd_dir, sizeof(fd_dir) - 1, "/proc/%s/fd", pid);
    fd_dir[len] = 0;

    dir = opendir(fd_dir);
    if (!dir) return false;

    while((ptr = readdir(dir)) != NULL)
    {
        len = snprintf(fd_path, sizeof(fd_path) - 1, "/proc/%s/fd/%s",
                pid, ptr->d_name);
        fd_path[len] = 0;

        len = readlink(fd_path, link_path, sizeof(link_path) - 1);
        link_path[len] = 0;

        if (0 == strcmp(link_path, fd))
        {
            closedir(dir);
            return true;
        }
    }
    closedir(dir);
    return  false;
}

struct proc *mkproc(const char *pid)
{
    char comm[20];
    struct proc *proc;
    int len;
    int fd;
    u_long size;

    len = snprintf(comm, sizeof(comm) - 1, "/proc/%s/comm", pid);
    comm[len] = 0;

    proc = malloc(sizeof(struct proc));
    if (NULL == proc) return NULL;

    fd = open(comm, O_RDONLY);
    size = read(fd, proc->name, sizeof(proc->name) - 1);
    close(fd);

    if (size <= 0)
    {
        free(proc);
        return NULL;
    }

    if ('\n' == proc->name[size - 1])
        proc->name[size - 1] = 0;
    else
        proc->name[size] = 0;

    proc->pid = atoi(pid);
    return  proc;
}


struct proc *get_proc_by_fd(const char *fd)
{
    DIR * dir;
    struct dirent * ptr;
    struct proc *proc;

    proc = NULL;

    dir = opendir("/proc");
    while((ptr = readdir(dir)) != NULL)
    {
        if (ptr->d_name[0] < 0x30 || ptr->d_name[0] > 0x3a)
            continue;

        if (match_fd(ptr->d_name, fd))
        {
            proc = mkproc(ptr->d_name);
            break;
        }
    }
    closedir(dir);
    return proc;
}

#if 0
int main(int argc, char **argv)
{
    struct proc *proc;
    proc = get_proc_by_fd(argv[1]);
    if (NULL == proc)
    {
        printf("not found\n");
        return -1;
    }
    printf("PID: %d, comm: %s\n", proc->pid, proc->name);
    free(proc);
    return 0;
}

#endif
