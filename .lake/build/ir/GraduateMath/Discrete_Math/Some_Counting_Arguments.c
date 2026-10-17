// Lean compiler output
// Module: GraduateMath.Discrete_Math.Some_Counting_Arguments
// Imports: public import Init public meta import Init public import GraduateMath.Basic public import Mathlib.Combinatorics.Pigeonhole
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_List_range(lean_object*);
lean_object* lp_mathlib_Multiset_product___redArg(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_List_filterTR_loop___at___00Multiset_filter___at___00Finset_filter___at___00triangle_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_Multiset_filter___at___00Finset_filter___at___00triangle_spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_triangle(lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_triangle___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_Finset_filter___at___00triangle_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_Finset_filter___at___00triangle_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_Multiset_filter___at___00Finset_filter___at___00triangle_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_List_filterTR_loop___at___00Multiset_filter___at___00Finset_filter___at___00triangle_x27_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_Multiset_filter___at___00Finset_filter___at___00triangle_x27_spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_triangle_x27(lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_Finset_filter___at___00triangle_x27_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_Finset_filter___at___00triangle_x27_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_Multiset_filter___at___00Finset_filter___at___00triangle_x27_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_List_filterTR_loop___at___00Multiset_filter___at___00Finset_filter___at___00triangle_spec__0_spec__0_spec__1(lean_object* v_a_1_, lean_object* v_a_2_){
_start:
{
if (lean_obj_tag(v_a_1_) == 0)
{
lean_object* v___x_3_; 
v___x_3_ = l_List_reverse___redArg(v_a_2_);
return v___x_3_;
}
else
{
lean_object* v_head_4_; lean_object* v_tail_5_; lean_object* v___x_7_; uint8_t v_isShared_8_; uint8_t v_isSharedCheck_17_; 
v_head_4_ = lean_ctor_get(v_a_1_, 0);
v_tail_5_ = lean_ctor_get(v_a_1_, 1);
v_isSharedCheck_17_ = !lean_is_exclusive(v_a_1_);
if (v_isSharedCheck_17_ == 0)
{
v___x_7_ = v_a_1_;
v_isShared_8_ = v_isSharedCheck_17_;
goto v_resetjp_6_;
}
else
{
lean_inc(v_tail_5_);
lean_inc(v_head_4_);
lean_dec(v_a_1_);
v___x_7_ = lean_box(0);
v_isShared_8_ = v_isSharedCheck_17_;
goto v_resetjp_6_;
}
v_resetjp_6_:
{
lean_object* v_fst_9_; lean_object* v_snd_10_; uint8_t v___x_11_; 
v_fst_9_ = lean_ctor_get(v_head_4_, 0);
v_snd_10_ = lean_ctor_get(v_head_4_, 1);
v___x_11_ = lean_nat_dec_lt(v_fst_9_, v_snd_10_);
if (v___x_11_ == 0)
{
lean_del_object(v___x_7_);
lean_dec(v_head_4_);
v_a_1_ = v_tail_5_;
goto _start;
}
else
{
lean_object* v___x_14_; 
if (v_isShared_8_ == 0)
{
lean_ctor_set(v___x_7_, 1, v_a_2_);
v___x_14_ = v___x_7_;
goto v_reusejp_13_;
}
else
{
lean_object* v_reuseFailAlloc_16_; 
v_reuseFailAlloc_16_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_16_, 0, v_head_4_);
lean_ctor_set(v_reuseFailAlloc_16_, 1, v_a_2_);
v___x_14_ = v_reuseFailAlloc_16_;
goto v_reusejp_13_;
}
v_reusejp_13_:
{
v_a_1_ = v_tail_5_;
v_a_2_ = v___x_14_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_Multiset_filter___at___00Finset_filter___at___00triangle_spec__0_spec__0___redArg(lean_object* v_s_18_){
_start:
{
lean_object* v___x_19_; lean_object* v___x_20_; 
v___x_19_ = lean_box(0);
v___x_20_ = lp_graduate_x2dmath_List_filterTR_loop___at___00Multiset_filter___at___00Finset_filter___at___00triangle_spec__0_spec__0_spec__1(v_s_18_, v___x_19_);
return v___x_20_;
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_triangle(lean_object* v_n_21_){
_start:
{
lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; 
v___x_22_ = lean_unsigned_to_nat(1u);
v___x_23_ = lean_nat_add(v_n_21_, v___x_22_);
v___x_24_ = l_List_range(v___x_23_);
lean_inc(v___x_24_);
v___x_25_ = lp_mathlib_Multiset_product___redArg(v___x_24_, v___x_24_);
v___x_26_ = lp_graduate_x2dmath_Multiset_filter___at___00Finset_filter___at___00triangle_spec__0_spec__0___redArg(v___x_25_);
return v___x_26_;
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_triangle___boxed(lean_object* v_n_27_){
_start:
{
lean_object* v_res_28_; 
v_res_28_ = lp_graduate_x2dmath_triangle(v_n_27_);
lean_dec(v_n_27_);
return v_res_28_;
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_Finset_filter___at___00triangle_spec__0___redArg(lean_object* v_s_29_){
_start:
{
lean_object* v___x_30_; 
v___x_30_ = lp_graduate_x2dmath_Multiset_filter___at___00Finset_filter___at___00triangle_spec__0_spec__0___redArg(v_s_29_);
return v___x_30_;
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_Finset_filter___at___00triangle_spec__0(lean_object* v_p_31_, lean_object* v_s_32_){
_start:
{
lean_object* v___x_33_; 
v___x_33_ = lp_graduate_x2dmath_Multiset_filter___at___00Finset_filter___at___00triangle_spec__0_spec__0___redArg(v_s_32_);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_Multiset_filter___at___00Finset_filter___at___00triangle_spec__0_spec__0(lean_object* v_p_34_, lean_object* v_s_35_){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = lp_graduate_x2dmath_Multiset_filter___at___00Finset_filter___at___00triangle_spec__0_spec__0___redArg(v_s_35_);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_List_filterTR_loop___at___00Multiset_filter___at___00Finset_filter___at___00triangle_x27_spec__0_spec__0_spec__1(lean_object* v_a_37_, lean_object* v_a_38_){
_start:
{
if (lean_obj_tag(v_a_37_) == 0)
{
lean_object* v___x_39_; 
v___x_39_ = l_List_reverse___redArg(v_a_38_);
return v___x_39_;
}
else
{
lean_object* v_head_40_; lean_object* v_tail_41_; lean_object* v___x_43_; uint8_t v_isShared_44_; uint8_t v_isSharedCheck_53_; 
v_head_40_ = lean_ctor_get(v_a_37_, 0);
v_tail_41_ = lean_ctor_get(v_a_37_, 1);
v_isSharedCheck_53_ = !lean_is_exclusive(v_a_37_);
if (v_isSharedCheck_53_ == 0)
{
v___x_43_ = v_a_37_;
v_isShared_44_ = v_isSharedCheck_53_;
goto v_resetjp_42_;
}
else
{
lean_inc(v_tail_41_);
lean_inc(v_head_40_);
lean_dec(v_a_37_);
v___x_43_ = lean_box(0);
v_isShared_44_ = v_isSharedCheck_53_;
goto v_resetjp_42_;
}
v_resetjp_42_:
{
lean_object* v_fst_45_; lean_object* v_snd_46_; uint8_t v___x_47_; 
v_fst_45_ = lean_ctor_get(v_head_40_, 0);
v_snd_46_ = lean_ctor_get(v_head_40_, 1);
v___x_47_ = lean_nat_dec_le(v_fst_45_, v_snd_46_);
if (v___x_47_ == 0)
{
lean_del_object(v___x_43_);
lean_dec(v_head_40_);
v_a_37_ = v_tail_41_;
goto _start;
}
else
{
lean_object* v___x_50_; 
if (v_isShared_44_ == 0)
{
lean_ctor_set(v___x_43_, 1, v_a_38_);
v___x_50_ = v___x_43_;
goto v_reusejp_49_;
}
else
{
lean_object* v_reuseFailAlloc_52_; 
v_reuseFailAlloc_52_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_52_, 0, v_head_40_);
lean_ctor_set(v_reuseFailAlloc_52_, 1, v_a_38_);
v___x_50_ = v_reuseFailAlloc_52_;
goto v_reusejp_49_;
}
v_reusejp_49_:
{
v_a_37_ = v_tail_41_;
v_a_38_ = v___x_50_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_Multiset_filter___at___00Finset_filter___at___00triangle_x27_spec__0_spec__0___redArg(lean_object* v_s_54_){
_start:
{
lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_55_ = lean_box(0);
v___x_56_ = lp_graduate_x2dmath_List_filterTR_loop___at___00Multiset_filter___at___00Finset_filter___at___00triangle_x27_spec__0_spec__0_spec__1(v_s_54_, v___x_55_);
return v___x_56_;
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_triangle_x27(lean_object* v_n_57_){
_start:
{
lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; 
v___x_58_ = l_List_range(v_n_57_);
lean_inc(v___x_58_);
v___x_59_ = lp_mathlib_Multiset_product___redArg(v___x_58_, v___x_58_);
v___x_60_ = lp_graduate_x2dmath_Multiset_filter___at___00Finset_filter___at___00triangle_x27_spec__0_spec__0___redArg(v___x_59_);
return v___x_60_;
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_Finset_filter___at___00triangle_x27_spec__0___redArg(lean_object* v_s_61_){
_start:
{
lean_object* v___x_62_; 
v___x_62_ = lp_graduate_x2dmath_Multiset_filter___at___00Finset_filter___at___00triangle_x27_spec__0_spec__0___redArg(v_s_61_);
return v___x_62_;
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_Finset_filter___at___00triangle_x27_spec__0(lean_object* v_p_63_, lean_object* v_s_64_){
_start:
{
lean_object* v___x_65_; 
v___x_65_ = lp_graduate_x2dmath_Multiset_filter___at___00Finset_filter___at___00triangle_x27_spec__0_spec__0___redArg(v_s_64_);
return v___x_65_;
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_Multiset_filter___at___00Finset_filter___at___00triangle_x27_spec__0_spec__0(lean_object* v_p_66_, lean_object* v_s_67_){
_start:
{
lean_object* v___x_68_; 
v___x_68_ = lp_graduate_x2dmath_Multiset_filter___at___00Finset_filter___at___00triangle_x27_spec__0_spec__0___redArg(v_s_67_);
return v___x_68_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_graduate_x2dmath_GraduateMath_Basic(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Combinatorics_Pigeonhole(uint8_t builtin);
void lean_initialize();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_graduate_x2dmath_GraduateMath_Discrete__Math_Some__Counting__Arguments(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
lean_initialize();
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_graduate_x2dmath_GraduateMath_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Combinatorics_Pigeonhole(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
