/* Generated by ./xlat/gen.sh from ./xlat/v4l2_control_flags.in; do not edit. */

static const struct xlat v4l2_control_flags[] = {
#if defined(V4L2_CTRL_FLAG_DISABLED) || (defined(HAVE_DECL_V4L2_CTRL_FLAG_DISABLED) && HAVE_DECL_V4L2_CTRL_FLAG_DISABLED)
 XLAT(V4L2_CTRL_FLAG_DISABLED),
#endif
#if defined(V4L2_CTRL_FLAG_GRABBED) || (defined(HAVE_DECL_V4L2_CTRL_FLAG_GRABBED) && HAVE_DECL_V4L2_CTRL_FLAG_GRABBED)
 XLAT(V4L2_CTRL_FLAG_GRABBED),
#endif
#if defined(V4L2_CTRL_FLAG_READ_ONLY) || (defined(HAVE_DECL_V4L2_CTRL_FLAG_READ_ONLY) && HAVE_DECL_V4L2_CTRL_FLAG_READ_ONLY)
 XLAT(V4L2_CTRL_FLAG_READ_ONLY),
#endif
#if defined(V4L2_CTRL_FLAG_UPDATE) || (defined(HAVE_DECL_V4L2_CTRL_FLAG_UPDATE) && HAVE_DECL_V4L2_CTRL_FLAG_UPDATE)
 XLAT(V4L2_CTRL_FLAG_UPDATE),
#endif
#if defined(V4L2_CTRL_FLAG_INACTIVE) || (defined(HAVE_DECL_V4L2_CTRL_FLAG_INACTIVE) && HAVE_DECL_V4L2_CTRL_FLAG_INACTIVE)
 XLAT(V4L2_CTRL_FLAG_INACTIVE),
#endif
#if defined(V4L2_CTRL_FLAG_SLIDER) || (defined(HAVE_DECL_V4L2_CTRL_FLAG_SLIDER) && HAVE_DECL_V4L2_CTRL_FLAG_SLIDER)
 XLAT(V4L2_CTRL_FLAG_SLIDER),
#endif
#if defined(V4L2_CTRL_FLAG_WRITE_ONLY) || (defined(HAVE_DECL_V4L2_CTRL_FLAG_WRITE_ONLY) && HAVE_DECL_V4L2_CTRL_FLAG_WRITE_ONLY)
 XLAT(V4L2_CTRL_FLAG_WRITE_ONLY),
#endif
#if defined(V4L2_CTRL_FLAG_VOLATILE) || (defined(HAVE_DECL_V4L2_CTRL_FLAG_VOLATILE) && HAVE_DECL_V4L2_CTRL_FLAG_VOLATILE)
 XLAT(V4L2_CTRL_FLAG_VOLATILE),
#endif
 XLAT_END
};
