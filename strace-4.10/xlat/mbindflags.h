/* Generated by ./xlat/gen.sh from ./xlat/mbindflags.in; do not edit. */

static const struct xlat mbindflags[] = {
#if defined(MPOL_MF_STRICT) || (defined(HAVE_DECL_MPOL_MF_STRICT) && HAVE_DECL_MPOL_MF_STRICT)
 XLAT(MPOL_MF_STRICT),
#endif
#if defined(MPOL_MF_MOVE) || (defined(HAVE_DECL_MPOL_MF_MOVE) && HAVE_DECL_MPOL_MF_MOVE)
 XLAT(MPOL_MF_MOVE),
#endif
#if defined(MPOL_MF_MOVE_ALL) || (defined(HAVE_DECL_MPOL_MF_MOVE_ALL) && HAVE_DECL_MPOL_MF_MOVE_ALL)
 XLAT(MPOL_MF_MOVE_ALL),
#endif
 XLAT_END
};
