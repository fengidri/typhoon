/* Generated by ./xlat/gen.sh from ./xlat/bpf_class.in; do not edit. */

static const struct xlat bpf_class[] = {
#if defined(BPF_LD) || (defined(HAVE_DECL_BPF_LD) && HAVE_DECL_BPF_LD)
 XLAT(BPF_LD),
#endif
#if defined(BPF_LDX) || (defined(HAVE_DECL_BPF_LDX) && HAVE_DECL_BPF_LDX)
 XLAT(BPF_LDX),
#endif
#if defined(BPF_ST) || (defined(HAVE_DECL_BPF_ST) && HAVE_DECL_BPF_ST)
 XLAT(BPF_ST),
#endif
#if defined(BPF_STX) || (defined(HAVE_DECL_BPF_STX) && HAVE_DECL_BPF_STX)
 XLAT(BPF_STX),
#endif
#if defined(BPF_ALU) || (defined(HAVE_DECL_BPF_ALU) && HAVE_DECL_BPF_ALU)
 XLAT(BPF_ALU),
#endif
#if defined(BPF_JMP) || (defined(HAVE_DECL_BPF_JMP) && HAVE_DECL_BPF_JMP)
 XLAT(BPF_JMP),
#endif
#if defined(BPF_RET) || (defined(HAVE_DECL_BPF_RET) && HAVE_DECL_BPF_RET)
 XLAT(BPF_RET),
#endif
#if defined(BPF_MISC) || (defined(HAVE_DECL_BPF_MISC) && HAVE_DECL_BPF_MISC)
 XLAT(BPF_MISC),
#endif
 XLAT_END
};
