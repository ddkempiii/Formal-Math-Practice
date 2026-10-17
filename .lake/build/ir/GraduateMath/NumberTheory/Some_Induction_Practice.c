// Lean compiler output
// Module: GraduateMath.NumberTheory.Some_Induction_Practice
// Imports: public import Init public meta import Init public import GraduateMath.Basic
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
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_fac(lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_fac___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath___private_GraduateMath_NumberTheory_Some__Induction__Practice_0__fac_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath___private_GraduateMath_NumberTheory_Some__Induction__Practice_0__fac_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath___private_GraduateMath_NumberTheory_Some__Induction__Practice_0__fac_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath___private_GraduateMath_NumberTheory_Some__Induction__Practice_0__fac_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_MyNat_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_MyNat_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_MyNat_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_MyNat_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_MyNat_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_MyNat_zero_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_MyNat_zero_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_MyNat_succ_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_MyNat_succ_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_MyNat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_MyNat_add___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_MyNat_mul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_MyNat_mul___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath___private_GraduateMath_NumberTheory_Some__Induction__Practice_0__MyNat_add_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath___private_GraduateMath_NumberTheory_Some__Induction__Practice_0__MyNat_add_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_fac(lean_object* v_x_1_){
_start:
{
lean_object* v_zero_2_; uint8_t v_isZero_3_; 
v_zero_2_ = lean_unsigned_to_nat(0u);
v_isZero_3_ = lean_nat_dec_eq(v_x_1_, v_zero_2_);
if (v_isZero_3_ == 1)
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(1u);
return v___x_4_;
}
else
{
lean_object* v_one_5_; lean_object* v_n_6_; lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; 
v_one_5_ = lean_unsigned_to_nat(1u);
v_n_6_ = lean_nat_sub(v_x_1_, v_one_5_);
v___x_7_ = lean_nat_add(v_n_6_, v_one_5_);
v___x_8_ = lp_graduate_x2dmath_fac(v_n_6_);
lean_dec(v_n_6_);
v___x_9_ = lean_nat_mul(v___x_7_, v___x_8_);
lean_dec(v___x_8_);
lean_dec(v___x_7_);
return v___x_9_;
}
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_fac___boxed(lean_object* v_x_10_){
_start:
{
lean_object* v_res_11_; 
v_res_11_ = lp_graduate_x2dmath_fac(v_x_10_);
lean_dec(v_x_10_);
return v_res_11_;
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath___private_GraduateMath_NumberTheory_Some__Induction__Practice_0__fac_match__1_splitter___redArg(lean_object* v_x_12_, lean_object* v_h__1_13_, lean_object* v_h__2_14_){
_start:
{
lean_object* v_zero_15_; uint8_t v_isZero_16_; 
v_zero_15_ = lean_unsigned_to_nat(0u);
v_isZero_16_ = lean_nat_dec_eq(v_x_12_, v_zero_15_);
if (v_isZero_16_ == 1)
{
lean_object* v___x_17_; lean_object* v___x_18_; 
lean_dec(v_h__2_14_);
v___x_17_ = lean_box(0);
v___x_18_ = lean_apply_1(v_h__1_13_, v___x_17_);
return v___x_18_;
}
else
{
lean_object* v_one_19_; lean_object* v_n_20_; lean_object* v___x_21_; 
lean_dec(v_h__1_13_);
v_one_19_ = lean_unsigned_to_nat(1u);
v_n_20_ = lean_nat_sub(v_x_12_, v_one_19_);
v___x_21_ = lean_apply_1(v_h__2_14_, v_n_20_);
return v___x_21_;
}
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath___private_GraduateMath_NumberTheory_Some__Induction__Practice_0__fac_match__1_splitter___redArg___boxed(lean_object* v_x_22_, lean_object* v_h__1_23_, lean_object* v_h__2_24_){
_start:
{
lean_object* v_res_25_; 
v_res_25_ = lp_graduate_x2dmath___private_GraduateMath_NumberTheory_Some__Induction__Practice_0__fac_match__1_splitter___redArg(v_x_22_, v_h__1_23_, v_h__2_24_);
lean_dec(v_x_22_);
return v_res_25_;
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath___private_GraduateMath_NumberTheory_Some__Induction__Practice_0__fac_match__1_splitter(lean_object* v_motive_26_, lean_object* v_x_27_, lean_object* v_h__1_28_, lean_object* v_h__2_29_){
_start:
{
lean_object* v_zero_30_; uint8_t v_isZero_31_; 
v_zero_30_ = lean_unsigned_to_nat(0u);
v_isZero_31_ = lean_nat_dec_eq(v_x_27_, v_zero_30_);
if (v_isZero_31_ == 1)
{
lean_object* v___x_32_; lean_object* v___x_33_; 
lean_dec(v_h__2_29_);
v___x_32_ = lean_box(0);
v___x_33_ = lean_apply_1(v_h__1_28_, v___x_32_);
return v___x_33_;
}
else
{
lean_object* v_one_34_; lean_object* v_n_35_; lean_object* v___x_36_; 
lean_dec(v_h__1_28_);
v_one_34_ = lean_unsigned_to_nat(1u);
v_n_35_ = lean_nat_sub(v_x_27_, v_one_34_);
v___x_36_ = lean_apply_1(v_h__2_29_, v_n_35_);
return v___x_36_;
}
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath___private_GraduateMath_NumberTheory_Some__Induction__Practice_0__fac_match__1_splitter___boxed(lean_object* v_motive_37_, lean_object* v_x_38_, lean_object* v_h__1_39_, lean_object* v_h__2_40_){
_start:
{
lean_object* v_res_41_; 
v_res_41_ = lp_graduate_x2dmath___private_GraduateMath_NumberTheory_Some__Induction__Practice_0__fac_match__1_splitter(v_motive_37_, v_x_38_, v_h__1_39_, v_h__2_40_);
lean_dec(v_x_38_);
return v_res_41_;
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_MyNat_ctorIdx(lean_object* v_x_42_){
_start:
{
if (lean_obj_tag(v_x_42_) == 0)
{
lean_object* v___x_43_; 
v___x_43_ = lean_unsigned_to_nat(0u);
return v___x_43_;
}
else
{
lean_object* v___x_44_; 
v___x_44_ = lean_unsigned_to_nat(1u);
return v___x_44_;
}
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_MyNat_ctorIdx___boxed(lean_object* v_x_45_){
_start:
{
lean_object* v_res_46_; 
v_res_46_ = lp_graduate_x2dmath_MyNat_ctorIdx(v_x_45_);
lean_dec(v_x_45_);
return v_res_46_;
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_MyNat_ctorElim___redArg(lean_object* v_t_47_, lean_object* v_k_48_){
_start:
{
if (lean_obj_tag(v_t_47_) == 0)
{
return v_k_48_;
}
else
{
lean_object* v_a_49_; lean_object* v___x_50_; 
v_a_49_ = lean_ctor_get(v_t_47_, 0);
lean_inc(v_a_49_);
lean_dec_ref_known(v_t_47_, 1);
v___x_50_ = lean_apply_1(v_k_48_, v_a_49_);
return v___x_50_;
}
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_MyNat_ctorElim(lean_object* v_motive_51_, lean_object* v_ctorIdx_52_, lean_object* v_t_53_, lean_object* v_h_54_, lean_object* v_k_55_){
_start:
{
lean_object* v___x_56_; 
v___x_56_ = lp_graduate_x2dmath_MyNat_ctorElim___redArg(v_t_53_, v_k_55_);
return v___x_56_;
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_MyNat_ctorElim___boxed(lean_object* v_motive_57_, lean_object* v_ctorIdx_58_, lean_object* v_t_59_, lean_object* v_h_60_, lean_object* v_k_61_){
_start:
{
lean_object* v_res_62_; 
v_res_62_ = lp_graduate_x2dmath_MyNat_ctorElim(v_motive_57_, v_ctorIdx_58_, v_t_59_, v_h_60_, v_k_61_);
lean_dec(v_ctorIdx_58_);
return v_res_62_;
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_MyNat_zero_elim___redArg(lean_object* v_t_63_, lean_object* v_zero_64_){
_start:
{
lean_object* v___x_65_; 
v___x_65_ = lp_graduate_x2dmath_MyNat_ctorElim___redArg(v_t_63_, v_zero_64_);
return v___x_65_;
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_MyNat_zero_elim(lean_object* v_motive_66_, lean_object* v_t_67_, lean_object* v_h_68_, lean_object* v_zero_69_){
_start:
{
lean_object* v___x_70_; 
v___x_70_ = lp_graduate_x2dmath_MyNat_ctorElim___redArg(v_t_67_, v_zero_69_);
return v___x_70_;
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_MyNat_succ_elim___redArg(lean_object* v_t_71_, lean_object* v_succ_72_){
_start:
{
lean_object* v___x_73_; 
v___x_73_ = lp_graduate_x2dmath_MyNat_ctorElim___redArg(v_t_71_, v_succ_72_);
return v___x_73_;
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_MyNat_succ_elim(lean_object* v_motive_74_, lean_object* v_t_75_, lean_object* v_h_76_, lean_object* v_succ_77_){
_start:
{
lean_object* v___x_78_; 
v___x_78_ = lp_graduate_x2dmath_MyNat_ctorElim___redArg(v_t_75_, v_succ_77_);
return v___x_78_;
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_MyNat_add(lean_object* v_x_79_, lean_object* v_x_80_){
_start:
{
if (lean_obj_tag(v_x_80_) == 0)
{
lean_inc(v_x_79_);
return v_x_79_;
}
else
{
lean_object* v_a_81_; lean_object* v___x_83_; uint8_t v_isShared_84_; uint8_t v_isSharedCheck_89_; 
v_a_81_ = lean_ctor_get(v_x_80_, 0);
v_isSharedCheck_89_ = !lean_is_exclusive(v_x_80_);
if (v_isSharedCheck_89_ == 0)
{
v___x_83_ = v_x_80_;
v_isShared_84_ = v_isSharedCheck_89_;
goto v_resetjp_82_;
}
else
{
lean_inc(v_a_81_);
lean_dec(v_x_80_);
v___x_83_ = lean_box(0);
v_isShared_84_ = v_isSharedCheck_89_;
goto v_resetjp_82_;
}
v_resetjp_82_:
{
lean_object* v___x_85_; lean_object* v___x_87_; 
v___x_85_ = lp_graduate_x2dmath_MyNat_add(v_x_79_, v_a_81_);
if (v_isShared_84_ == 0)
{
lean_ctor_set(v___x_83_, 0, v___x_85_);
v___x_87_ = v___x_83_;
goto v_reusejp_86_;
}
else
{
lean_object* v_reuseFailAlloc_88_; 
v_reuseFailAlloc_88_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_88_, 0, v___x_85_);
v___x_87_ = v_reuseFailAlloc_88_;
goto v_reusejp_86_;
}
v_reusejp_86_:
{
return v___x_87_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_MyNat_add___boxed(lean_object* v_x_90_, lean_object* v_x_91_){
_start:
{
lean_object* v_res_92_; 
v_res_92_ = lp_graduate_x2dmath_MyNat_add(v_x_90_, v_x_91_);
lean_dec(v_x_90_);
return v_res_92_;
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_MyNat_mul(lean_object* v_x_93_, lean_object* v_x_94_){
_start:
{
if (lean_obj_tag(v_x_94_) == 0)
{
lean_dec(v_x_93_);
return v_x_94_;
}
else
{
lean_object* v_a_95_; lean_object* v___x_96_; lean_object* v___x_97_; 
v_a_95_ = lean_ctor_get(v_x_94_, 0);
lean_inc(v_x_93_);
v___x_96_ = lp_graduate_x2dmath_MyNat_mul(v_x_93_, v_a_95_);
v___x_97_ = lp_graduate_x2dmath_MyNat_add(v___x_96_, v_x_93_);
lean_dec(v___x_96_);
return v___x_97_;
}
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_MyNat_mul___boxed(lean_object* v_x_98_, lean_object* v_x_99_){
_start:
{
lean_object* v_res_100_; 
v_res_100_ = lp_graduate_x2dmath_MyNat_mul(v_x_98_, v_x_99_);
lean_dec(v_x_99_);
return v_res_100_;
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath___private_GraduateMath_NumberTheory_Some__Induction__Practice_0__MyNat_add_match__1_splitter___redArg(lean_object* v_x_101_, lean_object* v_x_102_, lean_object* v_h__1_103_, lean_object* v_h__2_104_){
_start:
{
if (lean_obj_tag(v_x_102_) == 0)
{
lean_object* v___x_105_; 
lean_dec(v_h__2_104_);
v___x_105_ = lean_apply_1(v_h__1_103_, v_x_101_);
return v___x_105_;
}
else
{
lean_object* v_a_106_; lean_object* v___x_107_; 
lean_dec(v_h__1_103_);
v_a_106_ = lean_ctor_get(v_x_102_, 0);
lean_inc(v_a_106_);
lean_dec_ref_known(v_x_102_, 1);
v___x_107_ = lean_apply_2(v_h__2_104_, v_x_101_, v_a_106_);
return v___x_107_;
}
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath___private_GraduateMath_NumberTheory_Some__Induction__Practice_0__MyNat_add_match__1_splitter(lean_object* v_motive_108_, lean_object* v_x_109_, lean_object* v_x_110_, lean_object* v_h__1_111_, lean_object* v_h__2_112_){
_start:
{
if (lean_obj_tag(v_x_110_) == 0)
{
lean_object* v___x_113_; 
lean_dec(v_h__2_112_);
v___x_113_ = lean_apply_1(v_h__1_111_, v_x_109_);
return v___x_113_;
}
else
{
lean_object* v_a_114_; lean_object* v___x_115_; 
lean_dec(v_h__1_111_);
v_a_114_ = lean_ctor_get(v_x_110_, 0);
lean_inc(v_a_114_);
lean_dec_ref_known(v_x_110_, 1);
v___x_115_ = lean_apply_2(v_h__2_112_, v_x_109_, v_a_114_);
return v___x_115_;
}
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_graduate_x2dmath_GraduateMath_Basic(uint8_t builtin);
void lean_initialize();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_graduate_x2dmath_GraduateMath_NumberTheory_Some__Induction__Practice(uint8_t builtin) {
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
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
