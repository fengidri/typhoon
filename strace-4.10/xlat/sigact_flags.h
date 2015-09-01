/* Generated by ./xlat/gen.sh from ./xlat/sigact_flags.in; do not edit. */

static const struct xlat sigact_flags[] = {
#if defined(SA_RESTORER) || (defined(HAVE_DECL_SA_RESTORER) && HAVE_DECL_SA_RESTORER)
 XLAT(SA_RESTORER),
#endif
#if defined(SA_STACK) || (defined(HAVE_DECL_SA_STACK) && HAVE_DECL_SA_STACK)
 XLAT(SA_STACK),
#endif
#if defined(SA_RESTART) || (defined(HAVE_DECL_SA_RESTART) && HAVE_DECL_SA_RESTART)
 XLAT(SA_RESTART),
#endif
#if defined(SA_INTERRUPT) || (defined(HAVE_DECL_SA_INTERRUPT) && HAVE_DECL_SA_INTERRUPT)
 XLAT(SA_INTERRUPT),
#endif
#if defined(SA_NODEFER) || (defined(HAVE_DECL_SA_NODEFER) && HAVE_DECL_SA_NODEFER)
 XLAT(SA_NODEFER),
#endif
#if defined SA_NOMASK && SA_NODEFER != SA_NOMASK
#if defined(SA_NOMASK) || (defined(HAVE_DECL_SA_NOMASK) && HAVE_DECL_SA_NOMASK)
 XLAT(SA_NOMASK),
#endif
#endif
#if defined(SA_RESETHAND) || (defined(HAVE_DECL_SA_RESETHAND) && HAVE_DECL_SA_RESETHAND)
 XLAT(SA_RESETHAND),
#endif
#if defined SA_ONESHOT && SA_ONESHOT != SA_RESETHAND
#if defined(SA_ONESHOT) || (defined(HAVE_DECL_SA_ONESHOT) && HAVE_DECL_SA_ONESHOT)
 XLAT(SA_ONESHOT),
#endif
#endif
#if defined(SA_SIGINFO) || (defined(HAVE_DECL_SA_SIGINFO) && HAVE_DECL_SA_SIGINFO)
 XLAT(SA_SIGINFO),
#endif
#if defined(SA_RESETHAND) || (defined(HAVE_DECL_SA_RESETHAND) && HAVE_DECL_SA_RESETHAND)
 XLAT(SA_RESETHAND),
#endif
#if defined(SA_ONSTACK) || (defined(HAVE_DECL_SA_ONSTACK) && HAVE_DECL_SA_ONSTACK)
 XLAT(SA_ONSTACK),
#endif
#if defined(SA_NODEFER) || (defined(HAVE_DECL_SA_NODEFER) && HAVE_DECL_SA_NODEFER)
 XLAT(SA_NODEFER),
#endif
#if defined(SA_NOCLDSTOP) || (defined(HAVE_DECL_SA_NOCLDSTOP) && HAVE_DECL_SA_NOCLDSTOP)
 XLAT(SA_NOCLDSTOP),
#endif
#if defined(SA_NOCLDWAIT) || (defined(HAVE_DECL_SA_NOCLDWAIT) && HAVE_DECL_SA_NOCLDWAIT)
 XLAT(SA_NOCLDWAIT),
#endif
#if defined(_SA_BSDCALL) || (defined(HAVE_DECL__SA_BSDCALL) && HAVE_DECL__SA_BSDCALL)
 XLAT(_SA_BSDCALL),
#endif
#if defined(SA_NOPTRACE) || (defined(HAVE_DECL_SA_NOPTRACE) && HAVE_DECL_SA_NOPTRACE)
 XLAT(SA_NOPTRACE),
#endif
 XLAT_END
};
