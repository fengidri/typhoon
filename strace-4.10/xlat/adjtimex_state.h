/* Generated by ./xlat/gen.sh from xlat/adjtimex_state.in; do not edit. */

static const struct xlat adjtimex_state[] = {
#if defined(TIME_OK) || (defined(HAVE_DECL_TIME_OK) && HAVE_DECL_TIME_OK)
 XLAT(TIME_OK),
#endif
#if defined(TIME_INS) || (defined(HAVE_DECL_TIME_INS) && HAVE_DECL_TIME_INS)
 XLAT(TIME_INS),
#endif
#if defined(TIME_DEL) || (defined(HAVE_DECL_TIME_DEL) && HAVE_DECL_TIME_DEL)
 XLAT(TIME_DEL),
#endif
#if defined(TIME_OOP) || (defined(HAVE_DECL_TIME_OOP) && HAVE_DECL_TIME_OOP)
 XLAT(TIME_OOP),
#endif
#if defined(TIME_WAIT) || (defined(HAVE_DECL_TIME_WAIT) && HAVE_DECL_TIME_WAIT)
 XLAT(TIME_WAIT),
#endif
#if defined(TIME_ERROR) || (defined(HAVE_DECL_TIME_ERROR) && HAVE_DECL_TIME_ERROR)
 XLAT(TIME_ERROR),
#endif
 XLAT_END
};
