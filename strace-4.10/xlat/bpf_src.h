/* Generated by ./xlat/gen.sh from ./xlat/bpf_src.in; do not edit. */

static const struct xlat bpf_src[] = {
#if defined(BPF_K) || (defined(HAVE_DECL_BPF_K) && HAVE_DECL_BPF_K)
 XLAT(BPF_K),
#endif
#if defined(BPF_X) || (defined(HAVE_DECL_BPF_X) && HAVE_DECL_BPF_X)
 XLAT(BPF_X),
#endif
 XLAT_END
};
