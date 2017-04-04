// Licence: Public domain or whatever suits you.

#ifndef _GATTRIBS_H_
#define _GATTRIBS_H_

// Common Shared Attributes.
#define GATTRIB_aligned __aligned__
#define GATTRIB_cold __cold__
#define GATTRIB_deprecated __deprecated__
#define GATTRIB_hot __hot__
#define GATTRIB_section __section__
#define GATTRIB_unused __unused__
#define GATTRIB_used __used__
#define GATTRIB_visibility __visibility__
#define GATTRIB_weak __weak__
// x86 Common Shared Attributes.
#define GATTRIB_ms_struct ms_struct
#define GATTRIB_gcc_struct gcc_struct
// Common Function Attributes.
#define GATTRIB_alias __alias__(x)
#define GATTRIB_alloc_align __alloc_align__
#define GATTRIB_alloc_size __alloc_size__
#define GATTRIB_always_inline __always_inline__
#define GATTRIB_artificial __artificial__
#define GATTRIB_assume_aligned __assume_aligned__
#define GATTRIB_const __const__
#define GATTRIB_constructor __constructor__
#define GATTRIB_destructor __destructor__
#define GATTRIB_error __error__
#define GATTRIB_warning __warning__
#define GATTRIB_externally_visible __externally_visible__
#define GATTRIB_flatten __flatten__
#define GATTRIB_format __format__
#define GATTRIB_format_arg __format_arg__
#define GATTRIB_gnu_inline __gnu_inline__
#define GATTRIB_ifunc __ifunc__
#define GATTRIB_interrupt __interrupt__
#define GATTRIB_interrupt_handler __interrupt_handler__
#define GATTRIB_leaf __leaf__
#define GATTRIB_malloc __malloc__
#define GATTRIB_no_icf __no_icf__
#define GATTRIB_no_instrument_function __no_instrument_function__
#define GATTRIB_no_reorder __no_reorder__
#define GATTRIB_no_sanitize_address __no_sanitize_address__
#define GATTRIB_no_address_safety_analysis __no_address_safety_analysis__
#define GATTRIB_no_sanitize_thread __no_sanitize_thread__
#define GATTRIB_no_sanitize_undefined __no_sanitize_undefined__
#define GATTRIB_no_split_stack __no_split_stack__
#define GATTRIB_no_stack_limit __no_stack_limit__
#define GATTRIB_noclone __noclone__
#define GATTRIB_noinline __noinline__
#define GATTRIB_nonnull __nonnull__
#define GATTRIB_noplt __noplt__
#define GATTRIB_noreturn __noreturn__
#define GATTRIB_nothrow __nothrow__
#define GATTRIB_optimize  __optimize__
#define GATTRIB_pure __pure__
#define GATTRIB_returns_nonnull __returns_nonnull__
#define GATTRIB_returns_twice __returns_twice__
#define GATTRIB_sentinel __sentinel__
#define GATTRIB_sentinel_ __sentinel__
#define GATTRIB_simd __simd__
#define GATTRIB_stack_protect __stack_protect__
#define GATTRIB_target __target__
#define GATTRIB_target_clones __target_clones__
#define GATTRIB_warn_unused_result __warn_unused_result__
#define GATTRIB_weakref __weakref_
#define GATTRIB_weakref_ __weakref_
// x86 Common Function Attributes.
#define GATTRIB_cdecl __cdecl__
#define GATTRIB_fastcall __fastcall__
#define GATTRIB_thiscall __thiscall__
#define GATTRIB_ms_abi __ms_abi__
#define GATTRIB_sysv_abi __sysv_abi__
#define GATTRIB_callee_pop_aggregate_return __callee_pop_aggregate_return__
#define GATTRIB_ms_hook_prologue __ms_hook_prologue__
#define GATTRIB_regparm __regparm__
#define GATTRIB_sseregparm __sseregparm__
#define GATTRIB_force_align_arg_pointer __force_align_arg_pointer__
#define GATTRIB_stdcall __stdcall__
// Common Variable Attributes.
#define GATTRIB_cleanup __cleanup__
#define GATTRIB_common __common__
#define GATTRIB_nocommon __nocommon__
#define GATTRIB_mode __mode__
#define GATTRIB_packed __packed__
#define GATTRIB_tls_model __tls_model__
#define GATTRIB_vector_size __vector_size__
// x86 Common Variable Attributes.
//...
// Common Type Attributes.
#define GATTRIB_bnd_variable_size __bnd_variable_size__
#define GATTRIB_designated_init __designated_init__
#define GATTRIB_may_alias __may_alias__
#define GATTRIB_packed __packed__
#define GATTRIB_scalar_storage_order __scalar_storage_order__
#define GATTRIB_transparent_union __transparent_union__
// x86 Common Type Attributes.
//...
// Attribute Expansion.
#define GATTRIBS1(A1) \
    GATTRIB_##A1
#define GATTRIBS2(A1, A2) \
    GATTRIB_##A1, GATTRIB_##A2
#define GATTRIBS3(A1, A2, A3) \
    GATTRIB_##A1, GATTRIB_##A2, GATTRIB_##A3
#define GATTRIBS4(A1, A2, A3, A4) \
    GATTRIB_##A1, GATTRIB_##A2, GATTRIB_##A3, GATTRIB_##A4
#define GATTRIBS5(A1, A2, A3, A4, A5) \
    GATTRIB_##A1, GATTRIB_##A2, GATTRIB_##A3, GATTRIB_##A4, \
    GATTRIB_##A5
#define GATTRIBS6(A1, A2, A3, A4, A5, A6) \
    GATTRIB_##A1, GATTRIB_##A2, GATTRIB_##A3, GATTRIB_##A4, \
    GATTRIB_##A5, GATTRIB_##A6
#define GATTRIBS7(A1, A2, A3, A4, A5, A6, A7) \
    GATTRIB_##A1, GATTRIB_##A2, GATTRIB_##A3, GATTRIB_##A4, \
    GATTRIB_##A5, GATTRIB_##A6, GATTRIB_##A7
#define GATTRIBS8(A1, A2, A3, A4, A5, A6, A7, A8) \
    GATTRIB_##A1, GATTRIB_##A2, GATTRIB_##A3, GATTRIB_##A4, \
    GATTRIB_##A5, GATTRIB_##A6, GATTRIB_##A7, GATTRIB_##A8
// Attribute Unpacking.
#define GATTRIBS_GET(_1, _2, _3, _4, _5, _6, _7, _8, NAME, ...) NAME
#define GATTRIB_GEN(...)  GATTRIBS_GET(__VA_ARGS__, \
            GATTRIBS8, GATTRIBS7, GATTRIBS6, GATTRIBS5, GATTRIBS4, GATTRIBS3, GATTRIBS2, GATTRIBS1 \
        )(__VA_ARGS__)
// Single Attribute Macro.
#define GATTRIB(A) __attribute__((GATTRIB_##A))
#define GATTR(A) __attribute__((GATTRIB_##A))
// Multiple Attributes Macro.
#define GATTRIBS(...) __attribute__((GATTRIB_GEN(__VA_ARGS__)))
#define GATTRS(...) __attribute__((GATTRIB_GEN(__VA_ARGS__)))

#endif // _GATTRIBS_H_
