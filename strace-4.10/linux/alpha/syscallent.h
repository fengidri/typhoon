/*
 * Copyright (c) 1993 Branko Lankester <branko@hacktic.nl>
 * Copyright (c) 1993, 1994, 1995 Rick Sladkey <jrs@world.std.com>
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

[  0] = { 6,	0,		printargs,			"osf_syscall"		}, /*not implemented */
[  1] = { 1,	TP|SE,		sys_exit,			"exit"			},
[  2] = { 0,	TP,		sys_fork,			"fork"			},
[  3] = { 3,	TD,		sys_read,			"read"			},
[  4] = { 3,	TD,		sys_write,			"write"			},
[  5] = { 5,	0,		printargs,			"osf_old_open"		}, /*not implemented */
[  6] = { 1,	TD,		sys_close,			"close"			},
[  7] = { 4,	TP,		sys_osf_wait4,			"osf_wait4"		},
[  8] = { 5,	0,		printargs,			"osf_old_creat"		}, /*not implemented */
[  9] = { 2,	TF,		sys_link,			"link"			},
[ 10] = { 1,	TF,		sys_unlink,			"unlink"		},
[ 11] = { 5,	0,		printargs,			"osf_execve"		}, /*not implemented */
[ 12] = { 1,	TF,		sys_chdir,			"chdir"			},
[ 13] = { 1,	TD,		sys_fchdir,			"fchdir"		},
[ 14] = { 3,	TF,		sys_mknod,			"mknod"			},
[ 15] = { 2,	TF,		sys_chmod,			"chmod"			},
[ 16] = { 3,	TF,		sys_chown,			"chown"			},
[ 17] = { 1,	TM|SI,		sys_brk,			"brk"			},
[ 18] = { 5,	0,		printargs,			"osf_getfsstat"		}, /*not implemented */
[ 19] = { 3,	TD,		sys_lseek,			"lseek"			},
[ 20] = { 0,	0,		sys_getpid,			"getxpid"		},
[ 21] = { 4,	0,		printargs,			"osf_mount"		},
[ 22] = { 2,	TF,		sys_umount2,			"umount"		},
[ 23] = { 1,	0,		sys_setuid,			"setuid"		},
[ 24] = { 0,	NF,		sys_getuid,			"getxuid"		},
[ 25] = { 5,	0,		printargs,			"exec_with_loader"	}, /*not implemented */
[ 26] = { 4,	0,		sys_ptrace,			"ptrace"		},
[ 27] = { 5,	0,		printargs,			"osf_nrecvmsg"		}, /*not implemented */
[ 28] = { 5,	0,		printargs,			"osf_nsendmsg"		}, /*not implemented */
[ 29] = { 5,	0,		printargs,			"osf_nrecvfrom"		}, /*not implemented */
[ 30] = { 5,	0,		printargs,			"osf_naccept"		}, /*not implemented */
[ 31] = { 5,	0,		printargs,			"osf_ngetpeername"	}, /*not implemented */
[ 32] = { 5,	0,		printargs,			"osf_ngetsockname"	}, /*not implemented */
[ 33] = { 2,	TF,		sys_access,			"access"		},
[ 34] = { 5,	0,		printargs,			"osf_chflags"		}, /*not implemented */
[ 35] = { 5,	0,		printargs,			"osf_fchflags"		}, /*not implemented */
[ 36] = { 0,	0,		sys_sync,			"sync"			},
[ 37] = { 2,	TS,		sys_kill,			"kill"			},
[ 38] = { 5,	0,		printargs,			"osf_old_stat"		}, /*not implemented */
[ 39] = { 2,	0,		sys_setpgid,			"setpgid"		},
[ 40] = { 5,	0,		printargs,			"osf_old_lstat"		}, /*not implemented */
[ 41] = { 1,	TD,		sys_dup,			"dup"			},
[ 42] = { 1,	TD,		sys_pipe,			"pipe"			},
[ 43] = { 5,	0,		printargs,			"osf_set_program_attributes"	},
[ 44] = { 5,	0,		printargs,			"osf_profil"		}, /*not implemented */
[ 45] = { 3,	TD|TF,		sys_open,			"open"			},
[ 46] = { 5,	0,		printargs,			"osf_old_sigaction"	}, /*not implemented */
[ 47] = { 1,	NF,		sys_getgid,			"getxgid"		},
[ 48] = { 2,	TS,		sys_sigprocmask,		"osf_sigprocmask"	},
[ 49] = { 5,	0,		printargs,			"osf_getlogin"		}, /*not implemented */
[ 50] = { 5,	0,		printargs,			"osf_setlogin"		}, /*not implemented */
[ 51] = { 1,	TF,		sys_acct,			"acct"			},
[ 52] = { 1,	TS,		sys_sigpending,			"sigpending"		},
[ 53] = { },
[ 54] = { 3,	TD,		sys_ioctl,			"ioctl"			},
[ 55] = { 5,	0,		printargs,			"osf_reboot"		}, /*not implemented */
[ 56] = { 5,	0,		printargs,			"osf_revoke"		}, /*not implemented */
[ 57] = { 2,	TF,		sys_symlink,			"symlink"		},
[ 58] = { 3,	TF,		sys_readlink,			"readlink"		},
[ 59] = { 3,	TF|TP|SE|SI,	sys_execve,			"execve"		},
[ 60] = { 1,	0,		sys_umask,			"umask"			},
[ 61] = { 1,	TF,		sys_chroot,			"chroot"		},
[ 62] = { 5,	0,		printargs,			"osf_old_fstat"		}, /*not implemented */
[ 63] = { 0,	0,		sys_getpgrp,			"getpgrp"		},
[ 64] = { 0,	0,		sys_getpagesize,		"getpagesize"		},
[ 65] = { 5,	TM,		printargs,			"osf_mremap"		}, /*not implemented */
[ 66] = { 0,	TP,		sys_vfork,			"vfork"			},
[ 67] = { 2,	TF,		sys_stat,			"stat"			},
[ 68] = { 2,	TF,		sys_lstat,			"lstat"			},
[ 69] = { 5,	TM,		printargs,			"osf_sbrk"		}, /*not implemented */
[ 70] = { 5,	0,		printargs,			"osf_sstk"		}, /*not implemented */
[ 71] = { 6,	TD|TM|SI,	sys_mmap,			"mmap"			},
[ 72] = { 5,	0,		printargs,			"osf_old_vadvise"	}, /*not implemented */
[ 73] = { 2,	TM|SI,		sys_munmap,			"munmap"		},
[ 74] = { 3,	TM|SI,		sys_mprotect,			"mprotect"		},
[ 75] = { 3,	TM,		sys_madvise,			"madvise"		},
[ 76] = { 0,	0,		sys_vhangup,			"vhangup"		},
[ 77] = { 5,	0,		printargs,			"osf_kmodcall"		}, /*not implemented */
[ 78] = { 5,	TM,		printargs,			"osf_mincore"		}, /*not implemented */
[ 79] = { 2,	0,		sys_getgroups,			"getgroups"		},
[ 80] = { 2,	0,		sys_setgroups,			"setgroups"		},
[ 81] = { 5,	0,		printargs,			"osf_old_getpgrp"	}, /*not implemented */
[ 82] = { 2,	0,		sys_setpgrp,			"setpgrp"		},
[ 83] = { 3,	0,		sys_osf_setitimer,		"osf_setitimer"		},
[ 84] = { 5,	0,		printargs,			"osf_old_wait"		}, /*not implemented */
[ 85] = { 5,	0,		printargs,			"osf_table"		}, /*not implemented */
[ 86] = { 2,	0,		sys_osf_getitimer,		"osf_getitimer"		},
[ 87] = { 2,	0,		sys_gethostname,		"gethostname"		},
[ 88] = { 2,	0,		sys_sethostname,		"sethostname"		},
[ 89] = { 0,	0,		sys_getdtablesize,		"getdtablesize"		},
[ 90] = { 2,	TD,		sys_dup2,			"dup2"			},
[ 91] = { 2,	TD,		sys_fstat,			"fstat"			},
[ 92] = { 3,	TD,		sys_fcntl,			"fcntl"			},
[ 93] = { 5,	0,		sys_osf_select,			"osf_select"		},
[ 94] = { 3,	TD,		sys_poll,			"poll"			},
[ 95] = { 1,	TD,		sys_fsync,			"fsync"			},
[ 96] = { 3,	0,		sys_setpriority,		"setpriority"		},
[ 97] = { 3,	TN,		sys_socket,			"socket"		},
[ 98] = { 3,	TN,		sys_connect,			"connect"		},
[ 99] = { 3,	TN,		sys_accept,			"accept"		},
[100] = { 2,	0,		sys_getpriority,		"osf_getpriority"	},
[101] = { 4,	TN,		sys_send,			"send"			},
[102] = { 4,	TN,		sys_recv,			"recv"			},
[103] = { 0,	TS,		sys_sigreturn,			"sigreturn"		},
[104] = { 3,	TN,		sys_bind,			"bind"			},
[105] = { 5,	TN,		sys_setsockopt,			"setsockopt"		},
[106] = { 2,	TN,		sys_listen,			"listen"		},
[107] = { 5,	0,		printargs,			"osf_plock"		}, /*not implemented */
[108] = { 5,	0,		printargs,			"osf_old_sigvec"	}, /*not implemented */
[109] = { 5,	0,		printargs,			"osf_old_sigblock"	}, /*not implemented */
[110] = { 5,	0,		printargs,			"osf_old_sigsetmask"	}, /*not implemented */
[111] = { 3,	TS,		sys_sigsuspend,			"sigsuspend"		},
[112] = { 5,	0,		printargs,			"sigstack"		},
[113] = { 3,	TN,		sys_recvmsg,			"recvmsg"		},
[114] = { 3,	TN,		sys_sendmsg,			"sendmsg"		},
[115] = { 5,	0,		printargs,			"osf_old_vtrace"	}, /*not implemented */
[116] = { 2,	0,		sys_osf_gettimeofday,		"osf_gettimeofday"	},
[117] = { 2,	0,		sys_osf_getrusage,		"osf_getrusage"		},
[118] = { 5,	TN,		sys_getsockopt,			"getsockopt"		},
[119] = { },
[120] = { 3,	TD,		sys_readv,			"readv"			},
[121] = { 3,	TD,		sys_writev,			"writev"		},
[122] = { 2,	0,		sys_osf_settimeofday,		"osf_settimeofday"	},
[123] = { 3,	TD,		sys_fchown,			"fchown"		},
[124] = { 2,	TD,		sys_fchmod,			"fchmod"		},
[125] = { 6,	TN,		sys_recvfrom,			"recvfrom"		},
[126] = { 2,	0,		sys_setreuid,			"setreuid"		},
[127] = { 2,	0,		sys_setregid,			"setregid"		},
[128] = { 2,	TF,		sys_rename,			"rename"		},
[129] = { 2,	TF,		sys_truncate,			"truncate"		},
[130] = { 2,	TD,		sys_ftruncate,			"ftruncate"		},
[131] = { 2,	TD,		sys_flock,			"flock"			},
[132] = { 1,	0,		sys_setgid,			"setgid"		},
[133] = { 6,	TN,		sys_sendto,			"sendto"		},
[134] = { 2,	TN,		sys_shutdown,			"shutdown"		},
[135] = { 4,	TN,		sys_socketpair,			"socketpair"		},
[136] = { 2,	TF,		sys_mkdir,			"mkdir"			},
[137] = { 1,	TF,		sys_rmdir,			"rmdir"			},
[138] = { 2,	0,		sys_osf_utimes,			"osf_utimes"		},
[139] = { 5,	0,		printargs,			"osf_old_sigreturn"	},
[140] = { 5,	0,		printargs,			"osf_adjtime"		}, /*not implemented */
[141] = { 3,	TN,		sys_getpeername,		"getpeername"		},
[142] = { 5,	0,		printargs,			"osf_gethostid"		}, /*not implemented */
[143] = { 5,	0,		printargs,			"osf_sethostid"		}, /*not implemented */
[144] = { 2,	0,		sys_getrlimit,			"getrlimit"		},
[145] = { 2,	0,		sys_setrlimit,			"setrlimit"		},
[146] = { 5,	0,		printargs,			"osf_old_killpg"	}, /*not implemented */
[147] = { 0,	0,		sys_setsid,			"setsid"		},
[148] = { 4,	TF,		sys_quotactl,			"quotactl"		},
[149] = { 5,	0,		printargs,			"osf_oldquota"		}, /*not implemented */
[150] = { 3,	TN,		sys_getsockname,		"getsockname"		},
[151 ... 152] = { },
[153] = { 5,	0,		printargs,			"osf_pid_block"		}, /*not implemented */
[154] = { 5,	0,		printargs,			"osf_pid_unblock"	}, /*not implemented */
[155] = { },
[156] = { 3,	TS,		sys_sigaction,			"sigaction"		},
[157] = { 5,	0,		printargs,			"osf_sigwaitprim"	}, /*not implemented */
[158] = { 5,	0,		printargs,			"osf_nfssvc"		}, /*not implemented */
[159] = { 4,	0,		printargs,			"osf_getdirentries"	},
[160] = { 3,	0,		osf_statfs,		"osf_statfs"			},
[161] = { 3,	0,		osf_fstatfs,		"osf_fstatfs"			},
[162] = { },
[163] = { 5,	0,		printargs,			"osf_asynch_daemon"	}, /*not implemented */
[164] = { 5,	0,		printargs,			"osf_getfh"		}, /*not implemented */
[165] = { 2,	0,		printargs,			"osf_getdomainname"	},
[166] = { 2,	0,		sys_setdomainname,		"setdomainname"		},
[167 ... 168] = { },
[169] = { 5,	0,		printargs,			"osf_exportfs"		}, /*not implemented */
[170 ... 180] = { },
[181] = { 5,	0,		printargs,			"osf_alt_plock"		}, /*not implemented */
[182 ... 183] = { },
[184] = { 5,	0,		printargs,			"osf_getmnt"		}, /*not implemented */
[185 ... 186] = { },
[187] = { 5,	0,		printargs,			"osf_alt_sigpending"	}, /*not implemented */
[188] = { 5,	0,		printargs,			"osf_alt_setsid"	}, /*not implemented */
[189 ... 198] = { },
[199] = { 4,	0,		printargs,			"osf_swapon"		},
[200] = { 3,	TI,		sys_msgctl,			"msgctl"		},
[201] = { 2,	TI,		sys_msgget,			"msgget"		},
[202] = { 5,	TI,		sys_msgrcv,			"msgrcv"		},
[203] = { 4,	TI,		sys_msgsnd,			"msgsnd"		},
[204] = { 4,	TI,		sys_semctl,			"semctl"		},
[205] = { 3,	TI,		sys_semget,			"semget"		},
[206] = { 4,	TI,		printargs,			"semop"			},
[207] = { 1,	0,		printargs,			"osf_utsname"		},
[208] = { 3,	TF,		sys_chown,			"lchown"		},
[209] = { 3,	TI|TM,		printargs,			"osf_shmat"		},
[210] = { 3,	TI,		sys_shmctl,			"shmctl"		},
[211] = { 1,	TI|TM|SI,	sys_shmdt,			"shmdt"			},
[212] = { 3,	TI,		sys_shmget,			"shmget"		},
[213] = { 5,	0,		printargs,			"osf_mvalid"		}, /*not implemented */
[214] = { 5,	0,		printargs,			"osf_getaddressconf"	}, /*not implemented */
[215] = { 5,	0,		printargs,			"osf_msleep"		}, /*not implemented */
[216] = { 5,	0,		printargs,			"osf_mwakeup"		}, /*not implemented */
[217] = { 3,	TM,		sys_msync,			"msync"			},
[218] = { 5,	0,		printargs,			"osf_signal"		}, /*not implemented */
[219] = { 5,	0,		printargs,			"osf_utc_gettime"	}, /*not implemented */
[220] = { 5,	0,		printargs,			"osf_utc_adjtime"	}, /*not implemented */
[221] = { },
[222] = { 5,	0,		printargs,			"osf_security"		}, /*not implemented */
[223] = { 5,	0,		printargs,			"osf_kloadcall"		}, /*not implemented */
[224 ... 232] = { },
[233] = { 1,	0,		sys_getpgid,			"getpgid"		},
[234] = { 1,	0,		sys_getsid,			"getsid"		},
[235] = { 5,	TS,		sys_sigaltstack,		"sigaltstack"		},
[236] = { 5,	0,		printargs,			"osf_waitid"		}, /*not implemented */
[237] = { 5,	0,		printargs,			"osf_priocntlset"	}, /*not implemented */
[238] = { 5,	0,		printargs,			"osf_sigsendset"	}, /*not implemented */
[239] = { 5,	0,		printargs,			"osf_set_speculative"	}, /*not implemented */
[240] = { 5,	0,		printargs,			"osf_msfs_syscall"	}, /*not implemented */
[241] = { 5,	0,		printargs,			"osf_sysinfo"		},
[242] = { 5,	0,		printargs,			"osf_uadmin"		}, /*not implemented */
[243] = { 5,	0,		printargs,			"osf_fuser"		}, /*not implemented */
[244] = { 2,	0,		printargs,			"osf_proplist_syscall"	},
[245] = { 5,	0,		printargs,			"osf_ntp_adjtime"	}, /*not implemented */
[246] = { 5,	0,		printargs,			"osf_ntp_gettime"	}, /*not implemented */
[247] = { 5,	0,		printargs,			"osf_pathconf"		}, /*not implemented */
[248] = { 5,	0,		printargs,			"osf_fpathconf"		}, /*not implemented */
[249] = { },
[250] = { 5,	0,		printargs,			"osf_uswitch"		}, /*not implemented */
[251] = { 2,	0,		printargs,			"osf_usleep_thread"	},
[252] = { 5,	0,		printargs,			"osf_audcntl"		}, /*not implemented */
[253] = { 5,	0,		printargs,			"osf_audgen"		}, /*not implemented */
[254] = { 5,	0,		sys_sysfs,			"sysfs"			},
[255] = { 5,	0,		printargs,			"osf_subsysinfo"	}, /*not implemented */
[256] = { 5,	0,		printargs,			"osf_getsysinfo"	},
[257] = { 5,	0,		printargs,			"osf_setsysinfo"	},
[258] = { 5,	0,		printargs,			"osf_afs_syscall"	}, /*not implemented */
[259] = { 5,	0,		printargs,			"osf_swapctl"		}, /*not implemented */
[260] = { 5,	0,		printargs,			"osf_memcntl"		}, /*not implemented */
[261] = { 5,	0,		printargs,			"osf_fdatasync"		}, /*not implemented */
[262 ... 299] = { },
[300] = { 0,	0,		sys_bdflush,			"bdflush"		},
[301] = { 3,	0,		printargs,			"sethae"		},
[302] = { 5,	TF,		sys_mount,			"mount"			},
[303] = { 1,	0,		sys_adjtimex,			"adjtimex32"		},
[304] = { 1,	TF,		sys_swapoff,			"swapoff"		},
[305] = { 3,	TD,		sys_getdents,			"getdents"		},
[306] = { 2,	0,		sys_create_module,		"create_module"		},
[307] = { 4,	0,		sys_init_module,		"init_module"		},
[308] = { 2,	0,		sys_delete_module,		"delete_module"		},
[309] = { 1,	0,		sys_get_kernel_syms,		"get_kernel_syms"	},
[310] = { 3,	0,		sys_syslog,			"syslog"		},
[311] = { 4,	0,		sys_reboot,			"reboot"		},
[312] = { 5,	TP,		sys_clone,			"clone"			},
[313] = { 1,	TF,		sys_uselib,			"uselib"		},
[314] = { 2,	TM,		sys_mlock,			"mlock"			},
[315] = { 2,	TM,		sys_munlock,			"munlock"		},
[316] = { 1,	TM,		sys_mlockall,			"mlockall"		},
[317] = { 0,	TM,		sys_munlockall,			"munlockall"		},
[318] = { 1,	0,		sys_sysinfo,			"sysinfo"		},
[319] = { 1,	0,		sys_sysctl,			"sysctl"		},
[320] = { 0,	0,		sys_idle,			"idle"			},
[321] = { 1,	TF,		sys_umount,			"oldumount"		},
[322] = { 2,	TF,		sys_swapon,			"swapon"		},
[323] = { 1,	0,		sys_times,			"times"			},
[324] = { 1,	0,		sys_personality,		"personality"		},
[325] = { 1,	NF,		sys_setfsuid,			"setfsuid"		},
[326] = { 1,	NF,		sys_setfsgid,			"setfsgid"		},
[327] = { 2,	0,		sys_ustat,			"ustat"			},
[328] = { 2,	TF,		sys_statfs,			"statfs"		},
[329] = { 2,	TD,		sys_fstatfs,			"fstatfs"		},
[330] = { 2,	0,		sys_sched_setparam,		"sched_setparam"	},
[331] = { 2,	0,		sys_sched_getparam,		"sched_getparam"	},
[332] = { 3,	0,		sys_sched_setscheduler,		"sched_setscheduler"	},
[333] = { 2,	0,		sys_sched_getscheduler,		"sched_getscheduler"	},
[334] = { 0,	0,		sys_sched_yield,		"sched_yield"		},
[335] = { 1,	0,		sys_sched_get_priority_max,	"sched_get_priority_max"},
[336] = { 1,	0,		sys_sched_get_priority_min,	"sched_get_priority_min"},
[337] = { 2,	0,		sys_sched_rr_get_interval,	"sched_rr_get_interval"	},
[338] = { 5,	0,		sys_afs_syscall,		"afs_syscall"		},
[339] = { 1,	0,		sys_uname,			"uname"			},
[340] = { 2,	0,		sys_nanosleep,			"nanosleep"		},
[341] = { 5,	TM|SI,		sys_mremap,			"mremap"		},
[342] = { 3,	0,		sys_nfsservctl,			"nfsservctl"		},
[343] = { 3,	0,		sys_setresuid,			"setresuid"		},
[344] = { 3,	0,		sys_getresuid,			"getresuid"		},
[345] = { 5,	0,		printargs,			"pciconfig_read"	},
[346] = { 5,	0,		printargs,			"pciconfig_write"	},
[347] = { 5,	0,		sys_query_module,		"query_module"		},
[348] = { 5,	0,		sys_prctl,			"prctl"			},
[349] = { 4,	TD,		sys_pread,			"pread"			},
[350] = { 4,	TD,		sys_pwrite,			"pwrite"		},
[351] = { 0,	TS,		sys_rt_sigreturn,		"rt_sigreturn"		},
[352] = { 5,	TS,		sys_rt_sigaction,		"rt_sigaction"		},
[353] = { 4,	TS,		sys_rt_sigprocmask,		"rt_sigprocmask"	},
[354] = { 2,	TS,		sys_rt_sigpending,		"rt_sigpending"		},
[355] = { 4,	TS,		sys_rt_sigtimedwait,		"rt_sigtimedwait"	},
[356] = { 3,	TS,		sys_rt_sigqueueinfo,		"rt_sigqueueinfo"	},
[357] = { 2,	TS,		sys_rt_sigsuspend,		"rt_sigsuspend"		},
[358] = { 5,	TD,		sys_select,			"select"		},
[359] = { 2,	0,		sys_gettimeofday,		"gettimeofday"		},
[360] = { 3,	0,		sys_settimeofday,		"settimeofday"		},
[361] = { 2,	0,		sys_getitimer,			"getitimer"		},
[362] = { 3,	0,		sys_setitimer,			"setitimer"		},
[363] = { 2,	TF,		sys_utimes,			"utimes"		},
[364] = { 2,	0,		sys_getrusage,			"getrusage"		},
[365] = { 4,	TP,		sys_wait4,			"wait4"			},
[366] = { 1,	0,		sys_adjtimex,			"adjtimex"		},
[367] = { 2,	TF,		sys_getcwd,			"getcwd"		},
[368] = { 2,	0,		sys_capget,			"capget"		},
[369] = { 2,	0,		sys_capset,			"capset"		},
[370] = { 4,	TD|TN,		sys_sendfile,			"sendfile"		},
[371] = { 3,	0,		sys_setresgid,			"setresgid"		},
[372] = { 3,	0,		sys_getresgid,			"getresgid"		},
[373] = { 4,	0,		printargs,			"dipc"			}, /*not implemented */
[374] = { 2,	TF,		sys_pivotroot,			"pivot_root"		},
[375] = { 3,	TM,		sys_mincore,			"mincore"		},
[376] = { 3,	0,		printargs,			"pciconfig_iobase"	},
[377] = { 3,	TD,		sys_getdents64,			"getdents64"		},
[378] = { 0,	0,		sys_gettid,			"gettid"		},
[379] = { 3,	TD,		sys_readahead,			"readahead"		},
[380] = { },
[381] = { 2,	TS,		sys_kill,			"tkill"			},
[382] = { 5,	TF,		sys_setxattr,			"setxattr"		},
[383] = { 5,	TF,		sys_setxattr,			"lsetxattr"		},
[384] = { 5,	TD,		sys_fsetxattr,			"fsetxattr"		},
[385] = { 4,	TF,		sys_getxattr,			"getxattr"		},
[386] = { 4,	TF,		sys_getxattr,			"lgetxattr"		},
[387] = { 4,	TD,		sys_fgetxattr,			"fgetxattr"		},
[388] = { 3,	TF,		sys_listxattr,			"listxattr"		},
[389] = { 3,	TF,		sys_listxattr,			"llistxattr"		},
[390] = { 3,	TD,		sys_flistxattr,			"flistxattr"		},
[391] = { 2,	TF,		sys_removexattr,		"removexattr"		},
[392] = { 2,	TF,		sys_removexattr,		"lremovexattr"		},
[393] = { 2,	TD,		sys_fremovexattr,		"fremovexattr"		},
[394] = { 6,	0,		sys_futex,			"futex"			},
[395] = { 3,	0,		sys_sched_setaffinity,		"sched_setaffinity"	},
[396] = { 3,	0,		sys_sched_getaffinity,		"sched_getaffinity"	},
[397] = { 5,	0,		sys_tuxcall,			"tuxcall"		},
[398] = { 2,	0,		sys_io_setup,			"io_setup"		},
[399] = { 1,	0,		sys_io_destroy,			"io_destroy"		},
[400] = { 5,	0,		sys_io_getevents,		"io_getevents"		},
[401] = { 3,	0,		sys_io_submit,			"io_submit"		},
[402] = { 3,	0,		sys_io_cancel,			"io_cancel"		},
[403 ... 404] = { },
[405] = { 1,	TP|SE,		sys_exit,			"exit_group"		},
[406] = { 3,	0,		sys_lookup_dcookie,		"lookup_dcookie"	},
[407] = { 1,	TD,		sys_epoll_create,		"epoll_create"		},
[408] = { 4,	TD,		sys_epoll_ctl,			"epoll_ctl"		},
[409] = { 4,	TD,		sys_epoll_wait,			"epoll_wait"		},
[410] = { 5,	TM|SI,		sys_remap_file_pages,		"remap_file_pages"	},
[411] = { 1,	0,		sys_set_tid_address,		"set_tid_address"	},
[412] = { 0,	0,		sys_restart_syscall,		"restart_syscall"	},
[413] = { 4,	TD,		sys_fadvise64,			"fadvise64"		},
[414] = { 3,	0,		sys_timer_create,		"timer_create"		},
[415] = { 4,	0,		sys_timer_settime,		"timer_settime"		},
[416] = { 2,	0,		sys_timer_gettime,		"timer_gettime"		},
[417] = { 1,	0,		sys_timer_getoverrun,		"timer_getoverrun"	},
[418] = { 1,	0,		sys_timer_delete,		"timer_delete"		},
[419] = { 2,	0,		sys_clock_settime,		"clock_settime"		},
[420] = { 2,	0,		sys_clock_gettime,		"clock_gettime"		},
[421] = { 2,	0,		sys_clock_getres,		"clock_getres"		},
[422] = { 4,	0,		sys_clock_nanosleep,		"clock_nanosleep"	},
[423] = { 4,	TI,		sys_semtimedop,			"semtimedop"		},
[424] = { 3,	TS,		sys_tgkill,			"tgkill"		},
[425] = { 2,	TF,		sys_stat64,			"stat64"		},
[426] = { 2,	TF,		sys_lstat64,			"lstat64"		},
[427] = { 2,	TD,		sys_fstat64,			"fstat64"		},
[428] = { 5,	0,		sys_vserver,			"vserver"		},
[429] = { 6,	TM,		sys_mbind,			"mbind"			},
[430] = { 5,	TM,		sys_get_mempolicy,		"get_mempolicy"		},
[431] = { 3,	TM,		sys_set_mempolicy,		"set_mempolicy"		},
[432] = { 4,	0,		sys_mq_open,			"mq_open"		},
[433] = { 1,	0,		sys_mq_unlink,			"mq_unlink"		},
[434] = { 5,	0,		sys_mq_timedsend,		"mq_timedsend"		},
[435] = { 5,	0,		sys_mq_timedreceive,		"mq_timedreceive"	},
[436] = { 2,	0,		sys_mq_notify,			"mq_notify"		},
[437] = { 3,	0,		sys_mq_getsetattr,		"mq_getsetattr"		},
[438] = { 5,	TP,		sys_waitid,			"waitid"		},
[439] = { 5,	0,		sys_add_key,			"add_key"		},
[440] = { 4,	0,		sys_request_key,		"request_key"		},
[441] = { 5,	0,		sys_keyctl,			"keyctl"		},
[442] = { 3,	0,		sys_ioprio_set,			"ioprio_set"		},
[443] = { 2,	0,		sys_ioprio_get,			"ioprio_get"		},
[444] = { 0,	TD,		sys_inotify_init,		"inotify_init"		},
[445] = { 3,	TD,		sys_inotify_add_watch,		"inotify_add_watch"	},
[446] = { 2,	TD,		sys_inotify_rm_watch,		"inotify_rm_watch"	},
[447] = { 1,	TD,		sys_fdatasync,			"fdatasync"		},
[448] = { 4,	0,		sys_kexec_load,			"kexec_load"		},
[449] = { 4,	TM,		sys_migrate_pages,		"migrate_pages"		},
[450] = { 4,	TD|TF,		sys_openat,			"openat"		},
[451] = { 3,	TD|TF,		sys_mkdirat,			"mkdirat"		},
[452] = { 4,	TD|TF,		sys_mknodat,			"mknodat"		},
[453] = { 5,	TD|TF,		sys_fchownat,			"fchownat"		},
[454] = { 3,	TD|TF,		sys_futimesat,			"futimesat"		},
[455] = { 4,	TD|TF,		sys_newfstatat,			"newfstatat"		},
[456] = { 3,	TD|TF,		sys_unlinkat,			"unlinkat"		},
[457] = { 4,	TD|TF,		sys_renameat,			"renameat"		},
[458] = { 5,	TD|TF,		sys_linkat,			"linkat"		},
[459] = { 3,	TD|TF,		sys_symlinkat,			"symlinkat"		},
[460] = { 4,	TD|TF,		sys_readlinkat,			"readlinkat"		},
[461] = { 3,	TD|TF,		sys_fchmodat,			"fchmodat"		},
[462] = { 3,	TD|TF,		sys_faccessat,			"faccessat"		},
[463] = { 6,	TD,		sys_pselect6,			"pselect6"		},
[464] = { 5,	TD,		sys_ppoll,			"ppoll"			},
[465] = { 1,	TP,		sys_unshare,			"unshare"		},
[466] = { 2,	0,		sys_set_robust_list,		"set_robust_list"	},
[467] = { 3,	0,		sys_get_robust_list,		"get_robust_list"	},
[468] = { 6,	TD,		sys_splice,			"splice"		},
[469] = { 4,	TD,		sys_sync_file_range,		"sync_file_range"	},
[470] = { 4,	TD,		sys_tee,			"tee"			},
[471] = { 4,	TD,		sys_vmsplice,			"vmsplice"		},
[472] = { 6,	TM,		sys_move_pages,			"move_pages"		},
[473] = { 3,	0,		sys_getcpu,			"getcpu"		},
[474] = { 6,	TD,		sys_epoll_pwait,		"epoll_pwait"		},
[475] = { 4,	TD|TF,		sys_utimensat,			"utimensat"		},
[476] = { 3,	TD|TS,		sys_signalfd,			"signalfd"		},
[477] = { 4,	TD,		sys_timerfd,			"timerfd"		},
[478] = { 1,	TD,		sys_eventfd,			"eventfd"		},
[479] = { 5,	TN,		sys_recvmmsg,			"recvmmsg"		},
[480] = { 4,	TD,		sys_fallocate,			"fallocate"		},
[481] = { 2,	TD,		sys_timerfd_create,		"timerfd_create"	},
[482] = { 4,	TD,		sys_timerfd_settime,		"timerfd_settime"	},
[483] = { 2,	TD,		sys_timerfd_gettime,		"timerfd_gettime"	},
[484] = { 4,	TD|TS,		sys_signalfd4,			"signalfd4"		},
[485] = { 2,	TD,		sys_eventfd2,			"eventfd2"		},
[486] = { 1,	TD,		sys_epoll_create1,		"epoll_create1"		},
[487] = { 3,	TD,		sys_dup3,			"dup3"			},
[488] = { 2,	TD,		sys_pipe2,			"pipe2"			},
[489] = { 1,	TD,		sys_inotify_init1,		"inotify_init1"		},
[490] = { 4,	TD,		sys_preadv,			"preadv"		},
[491] = { 4,	TD,		sys_pwritev,			"pwritev"		},
[492] = { 4,	TP|TS,		sys_rt_tgsigqueueinfo,		"rt_tgsigqueueinfo"	},
[493] = { 5,	TD,		sys_perf_event_open,		"perf_event_open"	},
[494] = { 2,	TD,		sys_fanotify_init,		"fanotify_init"		},
[495] = { 5,	TD|TF,		sys_fanotify_mark,		"fanotify_mark"		},
[496] = { 4,	0,		sys_prlimit64,			"prlimit64"		},
[497] = { 5,	TD|TF,		sys_name_to_handle_at,		"name_to_handle_at"	},
[498] = { 3,	TD,		sys_open_by_handle_at,		"open_by_handle_at"	},
[499] = { 2,	0,		sys_clock_adjtime,		"clock_adjtime"		},
[500] = { 1,	TD,		sys_syncfs,			"syncfs"		},
[501] = { 2,	TD,		sys_setns,			"setns"			},
[502] = { 4,	TN,		sys_accept4,			"accept4"		},
[503] = { 4,	TN,		sys_sendmmsg,			"sendmmsg"		},
[504] = { 6,	0,		sys_process_vm_readv,		"process_vm_readv"	},
[505] = { 6,	0,		sys_process_vm_writev,		"process_vm_writev"	},
[506] = { 5,	0,		sys_kcmp,			"kcmp"			},
[507] = { 3,	TD,		sys_finit_module,		"finit_module"		},
[508] = { 3,	0,		sys_sched_setattr,		"sched_setattr"		},
[509] = { 4,	0,		sys_sched_getattr,		"sched_getattr"		},
[510] = { 5,	TD|TF,		sys_renameat2,			"renameat2"		},
