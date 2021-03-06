/* Generated by ./xlat/gen.sh from ./xlat/futexops.in; do not edit. */

static const struct xlat futexops[] = {
#if defined(FUTEX_WAIT) || (defined(HAVE_DECL_FUTEX_WAIT) && HAVE_DECL_FUTEX_WAIT)
 XLAT(FUTEX_WAIT),
#endif
#if defined(FUTEX_WAKE) || (defined(HAVE_DECL_FUTEX_WAKE) && HAVE_DECL_FUTEX_WAKE)
 XLAT(FUTEX_WAKE),
#endif
#if defined(FUTEX_FD) || (defined(HAVE_DECL_FUTEX_FD) && HAVE_DECL_FUTEX_FD)
 XLAT(FUTEX_FD),
#endif
#if defined(FUTEX_REQUEUE) || (defined(HAVE_DECL_FUTEX_REQUEUE) && HAVE_DECL_FUTEX_REQUEUE)
 XLAT(FUTEX_REQUEUE),
#endif
#if defined(FUTEX_CMP_REQUEUE) || (defined(HAVE_DECL_FUTEX_CMP_REQUEUE) && HAVE_DECL_FUTEX_CMP_REQUEUE)
 XLAT(FUTEX_CMP_REQUEUE),
#endif
#if defined(FUTEX_WAKE_OP) || (defined(HAVE_DECL_FUTEX_WAKE_OP) && HAVE_DECL_FUTEX_WAKE_OP)
 XLAT(FUTEX_WAKE_OP),
#endif
#if defined(FUTEX_LOCK_PI) || (defined(HAVE_DECL_FUTEX_LOCK_PI) && HAVE_DECL_FUTEX_LOCK_PI)
 XLAT(FUTEX_LOCK_PI),
#endif
#if defined(FUTEX_UNLOCK_PI) || (defined(HAVE_DECL_FUTEX_UNLOCK_PI) && HAVE_DECL_FUTEX_UNLOCK_PI)
 XLAT(FUTEX_UNLOCK_PI),
#endif
#if defined(FUTEX_TRYLOCK_PI) || (defined(HAVE_DECL_FUTEX_TRYLOCK_PI) && HAVE_DECL_FUTEX_TRYLOCK_PI)
 XLAT(FUTEX_TRYLOCK_PI),
#endif
#if defined(FUTEX_WAIT_BITSET) || (defined(HAVE_DECL_FUTEX_WAIT_BITSET) && HAVE_DECL_FUTEX_WAIT_BITSET)
 XLAT(FUTEX_WAIT_BITSET),
#endif
#if defined(FUTEX_WAKE_BITSET) || (defined(HAVE_DECL_FUTEX_WAKE_BITSET) && HAVE_DECL_FUTEX_WAKE_BITSET)
 XLAT(FUTEX_WAKE_BITSET),
#endif
#if defined(FUTEX_WAIT_REQUEUE_PI) || (defined(HAVE_DECL_FUTEX_WAIT_REQUEUE_PI) && HAVE_DECL_FUTEX_WAIT_REQUEUE_PI)
 XLAT(FUTEX_WAIT_REQUEUE_PI),
#endif
#if defined(FUTEX_CMP_REQUEUE_PI) || (defined(HAVE_DECL_FUTEX_CMP_REQUEUE_PI) && HAVE_DECL_FUTEX_CMP_REQUEUE_PI)
 XLAT(FUTEX_CMP_REQUEUE_PI),
#endif
#if defined(FUTEX_WAIT_PRIVATE) || (defined(HAVE_DECL_FUTEX_WAIT_PRIVATE) && HAVE_DECL_FUTEX_WAIT_PRIVATE)
 XLAT(FUTEX_WAIT_PRIVATE),
#endif
#if defined(FUTEX_WAKE_PRIVATE) || (defined(HAVE_DECL_FUTEX_WAKE_PRIVATE) && HAVE_DECL_FUTEX_WAKE_PRIVATE)
 XLAT(FUTEX_WAKE_PRIVATE),
#endif
#if defined(FUTEX_FD) || (defined(HAVE_DECL_FUTEX_FD) && HAVE_DECL_FUTEX_FD)
 XLAT(FUTEX_FD|FUTEX_PRIVATE_FLAG),
#endif
#if defined(FUTEX_REQUEUE_PRIVATE) || (defined(HAVE_DECL_FUTEX_REQUEUE_PRIVATE) && HAVE_DECL_FUTEX_REQUEUE_PRIVATE)
 XLAT(FUTEX_REQUEUE_PRIVATE),
#endif
#if defined(FUTEX_CMP_REQUEUE_PRIVATE) || (defined(HAVE_DECL_FUTEX_CMP_REQUEUE_PRIVATE) && HAVE_DECL_FUTEX_CMP_REQUEUE_PRIVATE)
 XLAT(FUTEX_CMP_REQUEUE_PRIVATE),
#endif
#if defined(FUTEX_WAKE_OP_PRIVATE) || (defined(HAVE_DECL_FUTEX_WAKE_OP_PRIVATE) && HAVE_DECL_FUTEX_WAKE_OP_PRIVATE)
 XLAT(FUTEX_WAKE_OP_PRIVATE),
#endif
#if defined(FUTEX_LOCK_PI_PRIVATE) || (defined(HAVE_DECL_FUTEX_LOCK_PI_PRIVATE) && HAVE_DECL_FUTEX_LOCK_PI_PRIVATE)
 XLAT(FUTEX_LOCK_PI_PRIVATE),
#endif
#if defined(FUTEX_UNLOCK_PI_PRIVATE) || (defined(HAVE_DECL_FUTEX_UNLOCK_PI_PRIVATE) && HAVE_DECL_FUTEX_UNLOCK_PI_PRIVATE)
 XLAT(FUTEX_UNLOCK_PI_PRIVATE),
#endif
#if defined(FUTEX_TRYLOCK_PI_PRIVATE) || (defined(HAVE_DECL_FUTEX_TRYLOCK_PI_PRIVATE) && HAVE_DECL_FUTEX_TRYLOCK_PI_PRIVATE)
 XLAT(FUTEX_TRYLOCK_PI_PRIVATE),
#endif
#if defined(FUTEX_WAIT_BITSET_PRIVATE) || (defined(HAVE_DECL_FUTEX_WAIT_BITSET_PRIVATE) && HAVE_DECL_FUTEX_WAIT_BITSET_PRIVATE)
 XLAT(FUTEX_WAIT_BITSET_PRIVATE),
#endif
#if defined(FUTEX_WAKE_BITSET_PRIVATE) || (defined(HAVE_DECL_FUTEX_WAKE_BITSET_PRIVATE) && HAVE_DECL_FUTEX_WAKE_BITSET_PRIVATE)
 XLAT(FUTEX_WAKE_BITSET_PRIVATE),
#endif
#if defined(FUTEX_WAIT_REQUEUE_PI_PRIVATE) || (defined(HAVE_DECL_FUTEX_WAIT_REQUEUE_PI_PRIVATE) && HAVE_DECL_FUTEX_WAIT_REQUEUE_PI_PRIVATE)
 XLAT(FUTEX_WAIT_REQUEUE_PI_PRIVATE),
#endif
#if defined(FUTEX_CMP_REQUEUE_PI_PRIVATE) || (defined(HAVE_DECL_FUTEX_CMP_REQUEUE_PI_PRIVATE) && HAVE_DECL_FUTEX_CMP_REQUEUE_PI_PRIVATE)
 XLAT(FUTEX_CMP_REQUEUE_PI_PRIVATE),
#endif
#if defined(FUTEX_WAIT_BITSET) || (defined(HAVE_DECL_FUTEX_WAIT_BITSET) && HAVE_DECL_FUTEX_WAIT_BITSET)
 XLAT(FUTEX_WAIT_BITSET|FUTEX_CLOCK_REALTIME),
#endif
#if defined(FUTEX_WAIT_BITSET_PRIVATE) || (defined(HAVE_DECL_FUTEX_WAIT_BITSET_PRIVATE) && HAVE_DECL_FUTEX_WAIT_BITSET_PRIVATE)
 XLAT(FUTEX_WAIT_BITSET_PRIVATE|FUTEX_CLOCK_REALTIME),
#endif
#if defined(FUTEX_WAIT_REQUEUE_PI) || (defined(HAVE_DECL_FUTEX_WAIT_REQUEUE_PI) && HAVE_DECL_FUTEX_WAIT_REQUEUE_PI)
 XLAT(FUTEX_WAIT_REQUEUE_PI|FUTEX_CLOCK_REALTIME),
#endif
#if defined(FUTEX_WAIT_REQUEUE_PI_PRIVATE) || (defined(HAVE_DECL_FUTEX_WAIT_REQUEUE_PI_PRIVATE) && HAVE_DECL_FUTEX_WAIT_REQUEUE_PI_PRIVATE)
 XLAT(FUTEX_WAIT_REQUEUE_PI_PRIVATE|FUTEX_CLOCK_REALTIME),
#endif
 XLAT_END
};
