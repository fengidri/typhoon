/* Generated by ./xlat/gen.sh from ./xlat/bootflags3.in; do not edit. */

static const struct xlat bootflags3[] = {
#if !(defined(LINUX_REBOOT_CMD_RESTART) || (defined(HAVE_DECL_LINUX_REBOOT_CMD_RESTART) && HAVE_DECL_LINUX_REBOOT_CMD_RESTART))
# define LINUX_REBOOT_CMD_RESTART 0x01234567
#endif
 XLAT(LINUX_REBOOT_CMD_RESTART),
#if !(defined(LINUX_REBOOT_CMD_HALT) || (defined(HAVE_DECL_LINUX_REBOOT_CMD_HALT) && HAVE_DECL_LINUX_REBOOT_CMD_HALT))
# define LINUX_REBOOT_CMD_HALT 0xCDEF0123
#endif
 XLAT(LINUX_REBOOT_CMD_HALT),
#if !(defined(LINUX_REBOOT_CMD_CAD_ON) || (defined(HAVE_DECL_LINUX_REBOOT_CMD_CAD_ON) && HAVE_DECL_LINUX_REBOOT_CMD_CAD_ON))
# define LINUX_REBOOT_CMD_CAD_ON 0x89ABCDEF
#endif
 XLAT(LINUX_REBOOT_CMD_CAD_ON),
#if !(defined(LINUX_REBOOT_CMD_CAD_OFF) || (defined(HAVE_DECL_LINUX_REBOOT_CMD_CAD_OFF) && HAVE_DECL_LINUX_REBOOT_CMD_CAD_OFF))
# define LINUX_REBOOT_CMD_CAD_OFF 0x00000000
#endif
 XLAT(LINUX_REBOOT_CMD_CAD_OFF),
#if !(defined(LINUX_REBOOT_CMD_POWER_OFF) || (defined(HAVE_DECL_LINUX_REBOOT_CMD_POWER_OFF) && HAVE_DECL_LINUX_REBOOT_CMD_POWER_OFF))
# define LINUX_REBOOT_CMD_POWER_OFF 0x4321FEDC
#endif
 XLAT(LINUX_REBOOT_CMD_POWER_OFF),
#if !(defined(LINUX_REBOOT_CMD_RESTART2) || (defined(HAVE_DECL_LINUX_REBOOT_CMD_RESTART2) && HAVE_DECL_LINUX_REBOOT_CMD_RESTART2))
# define LINUX_REBOOT_CMD_RESTART2 0xA1B2C3D4
#endif
 XLAT(LINUX_REBOOT_CMD_RESTART2),
#if !(defined(LINUX_REBOOT_CMD_SW_SUSPEND) || (defined(HAVE_DECL_LINUX_REBOOT_CMD_SW_SUSPEND) && HAVE_DECL_LINUX_REBOOT_CMD_SW_SUSPEND))
# define LINUX_REBOOT_CMD_SW_SUSPEND 0xD000FCE2
#endif
 XLAT(LINUX_REBOOT_CMD_SW_SUSPEND),
#if !(defined(LINUX_REBOOT_CMD_KEXEC) || (defined(HAVE_DECL_LINUX_REBOOT_CMD_KEXEC) && HAVE_DECL_LINUX_REBOOT_CMD_KEXEC))
# define LINUX_REBOOT_CMD_KEXEC 0x45584543
#endif
 XLAT(LINUX_REBOOT_CMD_KEXEC),
 XLAT_END
};
