// Lean compiler output
// Module: GraduateMath.Discrete_Math.Inductive_Structures
// Imports: public import Init public meta import Init public import Mathlib.Tactic
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
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lp_mathlib_List_elem___at___00List_isPerm___at___00Nat_instDecidableEqPartition_decEq_spec__0_spec__0(lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_MyListSpace_reverse___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_MyListSpace_reverse(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath___private_GraduateMath_Discrete__Math_Inductive__Structures_0__MyListSpace_reverse_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath___private_GraduateMath_Discrete__Math_Inductive__Structures_0__MyListSpace_reverse_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_BinTree_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_BinTree_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_BinTree_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_BinTree_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_BinTree_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_BinTree_empty_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_BinTree_empty_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_BinTree_node_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_BinTree_node_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_BinTree_size(lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_BinTree_size___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_BinTree_depth(lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_BinTree_depth___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath___private_GraduateMath_Discrete__Math_Inductive__Structures_0__BinTree_size_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath___private_GraduateMath_Discrete__Math_Inductive__Structures_0__BinTree_size_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_BinTree_flip(lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_PropForm_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_PropForm_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_PropForm_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_PropForm_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_PropForm_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_PropForm_var_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_PropForm_var_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_PropForm_fls_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_PropForm_fls_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_PropForm_conj_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_PropForm_conj_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_PropForm_disj_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_PropForm_disj_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_PropForm_impl_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_PropForm_impl_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_graduate_x2dmath_PropForm_eval(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_PropForm_eval___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Multiset_ndunion___at___00PropForm_vars_spec__0_spec__0_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Multiset_ndunion___at___00PropForm_vars_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_List_foldrTR___at___00Multiset_ndunion___at___00PropForm_vars_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_Multiset_ndunion___at___00PropForm_vars_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_PropForm_vars(lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_PropForm_vars___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_PropForm_subst(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_PropForm_subst___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath___private_GraduateMath_Discrete__Math_Inductive__Structures_0__PropForm_vars_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath___private_GraduateMath_Discrete__Math_Inductive__Structures_0__PropForm_vars_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath___private_GraduateMath_Discrete__Math_Inductive__Structures_0__PropForm_subst_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath___private_GraduateMath_Discrete__Math_Inductive__Structures_0__PropForm_subst_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath___private_GraduateMath_Discrete__Math_Inductive__Structures_0__PropForm_eval_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath___private_GraduateMath_Discrete__Math_Inductive__Structures_0__PropForm_eval_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_MyListSpace_reverse___redArg(lean_object* v_x_1_){
_start:
{
if (lean_obj_tag(v_x_1_) == 0)
{
return v_x_1_;
}
else
{
lean_object* v_head_2_; lean_object* v_tail_3_; lean_object* v___x_5_; uint8_t v_isShared_6_; uint8_t v_isSharedCheck_13_; 
v_head_2_ = lean_ctor_get(v_x_1_, 0);
v_tail_3_ = lean_ctor_get(v_x_1_, 1);
v_isSharedCheck_13_ = !lean_is_exclusive(v_x_1_);
if (v_isSharedCheck_13_ == 0)
{
v___x_5_ = v_x_1_;
v_isShared_6_ = v_isSharedCheck_13_;
goto v_resetjp_4_;
}
else
{
lean_inc(v_tail_3_);
lean_inc(v_head_2_);
lean_dec(v_x_1_);
v___x_5_ = lean_box(0);
v_isShared_6_ = v_isSharedCheck_13_;
goto v_resetjp_4_;
}
v_resetjp_4_:
{
lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_10_; 
v___x_7_ = lp_graduate_x2dmath_MyListSpace_reverse___redArg(v_tail_3_);
v___x_8_ = lean_box(0);
if (v_isShared_6_ == 0)
{
lean_ctor_set(v___x_5_, 1, v___x_8_);
v___x_10_ = v___x_5_;
goto v_reusejp_9_;
}
else
{
lean_object* v_reuseFailAlloc_12_; 
v_reuseFailAlloc_12_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_12_, 0, v_head_2_);
lean_ctor_set(v_reuseFailAlloc_12_, 1, v___x_8_);
v___x_10_ = v_reuseFailAlloc_12_;
goto v_reusejp_9_;
}
v_reusejp_9_:
{
lean_object* v___x_11_; 
v___x_11_ = l_List_appendTR___redArg(v___x_7_, v___x_10_);
return v___x_11_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_MyListSpace_reverse(lean_object* v_00_u03b1_14_, lean_object* v_x_15_){
_start:
{
lean_object* v___x_16_; 
v___x_16_ = lp_graduate_x2dmath_MyListSpace_reverse___redArg(v_x_15_);
return v___x_16_;
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath___private_GraduateMath_Discrete__Math_Inductive__Structures_0__MyListSpace_reverse_match__1_splitter___redArg(lean_object* v_x_17_, lean_object* v_h__1_18_, lean_object* v_h__2_19_){
_start:
{
if (lean_obj_tag(v_x_17_) == 0)
{
lean_object* v___x_20_; lean_object* v___x_21_; 
lean_dec(v_h__2_19_);
v___x_20_ = lean_box(0);
v___x_21_ = lean_apply_1(v_h__1_18_, v___x_20_);
return v___x_21_;
}
else
{
lean_object* v_head_22_; lean_object* v_tail_23_; lean_object* v___x_24_; 
lean_dec(v_h__1_18_);
v_head_22_ = lean_ctor_get(v_x_17_, 0);
lean_inc(v_head_22_);
v_tail_23_ = lean_ctor_get(v_x_17_, 1);
lean_inc(v_tail_23_);
lean_dec_ref_known(v_x_17_, 2);
v___x_24_ = lean_apply_2(v_h__2_19_, v_head_22_, v_tail_23_);
return v___x_24_;
}
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath___private_GraduateMath_Discrete__Math_Inductive__Structures_0__MyListSpace_reverse_match__1_splitter(lean_object* v_00_u03b1_25_, lean_object* v_motive_26_, lean_object* v_x_27_, lean_object* v_h__1_28_, lean_object* v_h__2_29_){
_start:
{
if (lean_obj_tag(v_x_27_) == 0)
{
lean_object* v___x_30_; lean_object* v___x_31_; 
lean_dec(v_h__2_29_);
v___x_30_ = lean_box(0);
v___x_31_ = lean_apply_1(v_h__1_28_, v___x_30_);
return v___x_31_;
}
else
{
lean_object* v_head_32_; lean_object* v_tail_33_; lean_object* v___x_34_; 
lean_dec(v_h__1_28_);
v_head_32_ = lean_ctor_get(v_x_27_, 0);
lean_inc(v_head_32_);
v_tail_33_ = lean_ctor_get(v_x_27_, 1);
lean_inc(v_tail_33_);
lean_dec_ref_known(v_x_27_, 2);
v___x_34_ = lean_apply_2(v_h__2_29_, v_head_32_, v_tail_33_);
return v___x_34_;
}
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_BinTree_ctorIdx(lean_object* v_x_35_){
_start:
{
if (lean_obj_tag(v_x_35_) == 0)
{
lean_object* v___x_36_; 
v___x_36_ = lean_unsigned_to_nat(0u);
return v___x_36_;
}
else
{
lean_object* v___x_37_; 
v___x_37_ = lean_unsigned_to_nat(1u);
return v___x_37_;
}
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_BinTree_ctorIdx___boxed(lean_object* v_x_38_){
_start:
{
lean_object* v_res_39_; 
v_res_39_ = lp_graduate_x2dmath_BinTree_ctorIdx(v_x_38_);
lean_dec(v_x_38_);
return v_res_39_;
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_BinTree_ctorElim___redArg(lean_object* v_t_40_, lean_object* v_k_41_){
_start:
{
if (lean_obj_tag(v_t_40_) == 0)
{
return v_k_41_;
}
else
{
lean_object* v_a_42_; lean_object* v_a_43_; lean_object* v___x_44_; 
v_a_42_ = lean_ctor_get(v_t_40_, 0);
lean_inc(v_a_42_);
v_a_43_ = lean_ctor_get(v_t_40_, 1);
lean_inc(v_a_43_);
lean_dec_ref_known(v_t_40_, 2);
v___x_44_ = lean_apply_2(v_k_41_, v_a_42_, v_a_43_);
return v___x_44_;
}
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_BinTree_ctorElim(lean_object* v_motive_45_, lean_object* v_ctorIdx_46_, lean_object* v_t_47_, lean_object* v_h_48_, lean_object* v_k_49_){
_start:
{
lean_object* v___x_50_; 
v___x_50_ = lp_graduate_x2dmath_BinTree_ctorElim___redArg(v_t_47_, v_k_49_);
return v___x_50_;
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_BinTree_ctorElim___boxed(lean_object* v_motive_51_, lean_object* v_ctorIdx_52_, lean_object* v_t_53_, lean_object* v_h_54_, lean_object* v_k_55_){
_start:
{
lean_object* v_res_56_; 
v_res_56_ = lp_graduate_x2dmath_BinTree_ctorElim(v_motive_51_, v_ctorIdx_52_, v_t_53_, v_h_54_, v_k_55_);
lean_dec(v_ctorIdx_52_);
return v_res_56_;
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_BinTree_empty_elim___redArg(lean_object* v_t_57_, lean_object* v_empty_58_){
_start:
{
lean_object* v___x_59_; 
v___x_59_ = lp_graduate_x2dmath_BinTree_ctorElim___redArg(v_t_57_, v_empty_58_);
return v___x_59_;
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_BinTree_empty_elim(lean_object* v_motive_60_, lean_object* v_t_61_, lean_object* v_h_62_, lean_object* v_empty_63_){
_start:
{
lean_object* v___x_64_; 
v___x_64_ = lp_graduate_x2dmath_BinTree_ctorElim___redArg(v_t_61_, v_empty_63_);
return v___x_64_;
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_BinTree_node_elim___redArg(lean_object* v_t_65_, lean_object* v_node_66_){
_start:
{
lean_object* v___x_67_; 
v___x_67_ = lp_graduate_x2dmath_BinTree_ctorElim___redArg(v_t_65_, v_node_66_);
return v___x_67_;
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_BinTree_node_elim(lean_object* v_motive_68_, lean_object* v_t_69_, lean_object* v_h_70_, lean_object* v_node_71_){
_start:
{
lean_object* v___x_72_; 
v___x_72_ = lp_graduate_x2dmath_BinTree_ctorElim___redArg(v_t_69_, v_node_71_);
return v___x_72_;
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_BinTree_size(lean_object* v_x_73_){
_start:
{
if (lean_obj_tag(v_x_73_) == 0)
{
lean_object* v___x_74_; 
v___x_74_ = lean_unsigned_to_nat(0u);
return v___x_74_;
}
else
{
lean_object* v_a_75_; lean_object* v_a_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; 
v_a_75_ = lean_ctor_get(v_x_73_, 0);
v_a_76_ = lean_ctor_get(v_x_73_, 1);
v___x_77_ = lp_graduate_x2dmath_BinTree_size(v_a_75_);
v___x_78_ = lp_graduate_x2dmath_BinTree_size(v_a_76_);
v___x_79_ = lean_nat_add(v___x_77_, v___x_78_);
lean_dec(v___x_78_);
lean_dec(v___x_77_);
v___x_80_ = lean_unsigned_to_nat(1u);
v___x_81_ = lean_nat_add(v___x_79_, v___x_80_);
lean_dec(v___x_79_);
return v___x_81_;
}
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_BinTree_size___boxed(lean_object* v_x_82_){
_start:
{
lean_object* v_res_83_; 
v_res_83_ = lp_graduate_x2dmath_BinTree_size(v_x_82_);
lean_dec(v_x_82_);
return v_res_83_;
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_BinTree_depth(lean_object* v_x_84_){
_start:
{
lean_object* v___y_86_; 
if (lean_obj_tag(v_x_84_) == 0)
{
lean_object* v___x_89_; 
v___x_89_ = lean_unsigned_to_nat(0u);
return v___x_89_;
}
else
{
lean_object* v_a_90_; lean_object* v_a_91_; lean_object* v___x_92_; lean_object* v___x_93_; uint8_t v___x_94_; 
v_a_90_ = lean_ctor_get(v_x_84_, 0);
v_a_91_ = lean_ctor_get(v_x_84_, 1);
v___x_92_ = lp_graduate_x2dmath_BinTree_depth(v_a_90_);
v___x_93_ = lp_graduate_x2dmath_BinTree_depth(v_a_91_);
v___x_94_ = lean_nat_dec_le(v___x_92_, v___x_93_);
if (v___x_94_ == 0)
{
lean_dec(v___x_93_);
v___y_86_ = v___x_92_;
goto v___jp_85_;
}
else
{
lean_dec(v___x_92_);
v___y_86_ = v___x_93_;
goto v___jp_85_;
}
}
v___jp_85_:
{
lean_object* v___x_87_; lean_object* v___x_88_; 
v___x_87_ = lean_unsigned_to_nat(1u);
v___x_88_ = lean_nat_add(v___y_86_, v___x_87_);
lean_dec(v___y_86_);
return v___x_88_;
}
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_BinTree_depth___boxed(lean_object* v_x_95_){
_start:
{
lean_object* v_res_96_; 
v_res_96_ = lp_graduate_x2dmath_BinTree_depth(v_x_95_);
lean_dec(v_x_95_);
return v_res_96_;
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath___private_GraduateMath_Discrete__Math_Inductive__Structures_0__BinTree_size_match__1_splitter___redArg(lean_object* v_x_97_, lean_object* v_h__1_98_, lean_object* v_h__2_99_){
_start:
{
if (lean_obj_tag(v_x_97_) == 0)
{
lean_object* v___x_100_; lean_object* v___x_101_; 
lean_dec(v_h__2_99_);
v___x_100_ = lean_box(0);
v___x_101_ = lean_apply_1(v_h__1_98_, v___x_100_);
return v___x_101_;
}
else
{
lean_object* v_a_102_; lean_object* v_a_103_; lean_object* v___x_104_; 
lean_dec(v_h__1_98_);
v_a_102_ = lean_ctor_get(v_x_97_, 0);
lean_inc(v_a_102_);
v_a_103_ = lean_ctor_get(v_x_97_, 1);
lean_inc(v_a_103_);
lean_dec_ref_known(v_x_97_, 2);
v___x_104_ = lean_apply_2(v_h__2_99_, v_a_102_, v_a_103_);
return v___x_104_;
}
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath___private_GraduateMath_Discrete__Math_Inductive__Structures_0__BinTree_size_match__1_splitter(lean_object* v_motive_105_, lean_object* v_x_106_, lean_object* v_h__1_107_, lean_object* v_h__2_108_){
_start:
{
if (lean_obj_tag(v_x_106_) == 0)
{
lean_object* v___x_109_; lean_object* v___x_110_; 
lean_dec(v_h__2_108_);
v___x_109_ = lean_box(0);
v___x_110_ = lean_apply_1(v_h__1_107_, v___x_109_);
return v___x_110_;
}
else
{
lean_object* v_a_111_; lean_object* v_a_112_; lean_object* v___x_113_; 
lean_dec(v_h__1_107_);
v_a_111_ = lean_ctor_get(v_x_106_, 0);
lean_inc(v_a_111_);
v_a_112_ = lean_ctor_get(v_x_106_, 1);
lean_inc(v_a_112_);
lean_dec_ref_known(v_x_106_, 2);
v___x_113_ = lean_apply_2(v_h__2_108_, v_a_111_, v_a_112_);
return v___x_113_;
}
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_BinTree_flip(lean_object* v_x_114_){
_start:
{
if (lean_obj_tag(v_x_114_) == 0)
{
return v_x_114_;
}
else
{
lean_object* v_a_115_; lean_object* v_a_116_; lean_object* v___x_118_; uint8_t v_isShared_119_; uint8_t v_isSharedCheck_125_; 
v_a_115_ = lean_ctor_get(v_x_114_, 0);
v_a_116_ = lean_ctor_get(v_x_114_, 1);
v_isSharedCheck_125_ = !lean_is_exclusive(v_x_114_);
if (v_isSharedCheck_125_ == 0)
{
v___x_118_ = v_x_114_;
v_isShared_119_ = v_isSharedCheck_125_;
goto v_resetjp_117_;
}
else
{
lean_inc(v_a_116_);
lean_inc(v_a_115_);
lean_dec(v_x_114_);
v___x_118_ = lean_box(0);
v_isShared_119_ = v_isSharedCheck_125_;
goto v_resetjp_117_;
}
v_resetjp_117_:
{
lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_123_; 
v___x_120_ = lp_graduate_x2dmath_BinTree_flip(v_a_116_);
v___x_121_ = lp_graduate_x2dmath_BinTree_flip(v_a_115_);
if (v_isShared_119_ == 0)
{
lean_ctor_set(v___x_118_, 1, v___x_121_);
lean_ctor_set(v___x_118_, 0, v___x_120_);
v___x_123_ = v___x_118_;
goto v_reusejp_122_;
}
else
{
lean_object* v_reuseFailAlloc_124_; 
v_reuseFailAlloc_124_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_124_, 0, v___x_120_);
lean_ctor_set(v_reuseFailAlloc_124_, 1, v___x_121_);
v___x_123_ = v_reuseFailAlloc_124_;
goto v_reusejp_122_;
}
v_reusejp_122_:
{
return v___x_123_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_PropForm_ctorIdx(lean_object* v_x_126_){
_start:
{
switch(lean_obj_tag(v_x_126_))
{
case 0:
{
lean_object* v___x_127_; 
v___x_127_ = lean_unsigned_to_nat(0u);
return v___x_127_;
}
case 1:
{
lean_object* v___x_128_; 
v___x_128_ = lean_unsigned_to_nat(1u);
return v___x_128_;
}
case 2:
{
lean_object* v___x_129_; 
v___x_129_ = lean_unsigned_to_nat(2u);
return v___x_129_;
}
case 3:
{
lean_object* v___x_130_; 
v___x_130_ = lean_unsigned_to_nat(3u);
return v___x_130_;
}
default: 
{
lean_object* v___x_131_; 
v___x_131_ = lean_unsigned_to_nat(4u);
return v___x_131_;
}
}
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_PropForm_ctorIdx___boxed(lean_object* v_x_132_){
_start:
{
lean_object* v_res_133_; 
v_res_133_ = lp_graduate_x2dmath_PropForm_ctorIdx(v_x_132_);
lean_dec(v_x_132_);
return v_res_133_;
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_PropForm_ctorElim___redArg(lean_object* v_t_134_, lean_object* v_k_135_){
_start:
{
switch(lean_obj_tag(v_t_134_))
{
case 0:
{
lean_object* v_n_136_; lean_object* v___x_137_; 
v_n_136_ = lean_ctor_get(v_t_134_, 0);
lean_inc(v_n_136_);
lean_dec_ref_known(v_t_134_, 1);
v___x_137_ = lean_apply_1(v_k_135_, v_n_136_);
return v___x_137_;
}
case 1:
{
return v_k_135_;
}
default: 
{
lean_object* v_A_138_; lean_object* v_B_139_; lean_object* v___x_140_; 
v_A_138_ = lean_ctor_get(v_t_134_, 0);
lean_inc(v_A_138_);
v_B_139_ = lean_ctor_get(v_t_134_, 1);
lean_inc(v_B_139_);
lean_dec(v_t_134_);
v___x_140_ = lean_apply_2(v_k_135_, v_A_138_, v_B_139_);
return v___x_140_;
}
}
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_PropForm_ctorElim(lean_object* v_motive_141_, lean_object* v_ctorIdx_142_, lean_object* v_t_143_, lean_object* v_h_144_, lean_object* v_k_145_){
_start:
{
lean_object* v___x_146_; 
v___x_146_ = lp_graduate_x2dmath_PropForm_ctorElim___redArg(v_t_143_, v_k_145_);
return v___x_146_;
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_PropForm_ctorElim___boxed(lean_object* v_motive_147_, lean_object* v_ctorIdx_148_, lean_object* v_t_149_, lean_object* v_h_150_, lean_object* v_k_151_){
_start:
{
lean_object* v_res_152_; 
v_res_152_ = lp_graduate_x2dmath_PropForm_ctorElim(v_motive_147_, v_ctorIdx_148_, v_t_149_, v_h_150_, v_k_151_);
lean_dec(v_ctorIdx_148_);
return v_res_152_;
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_PropForm_var_elim___redArg(lean_object* v_t_153_, lean_object* v_var_154_){
_start:
{
lean_object* v___x_155_; 
v___x_155_ = lp_graduate_x2dmath_PropForm_ctorElim___redArg(v_t_153_, v_var_154_);
return v___x_155_;
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_PropForm_var_elim(lean_object* v_motive_156_, lean_object* v_t_157_, lean_object* v_h_158_, lean_object* v_var_159_){
_start:
{
lean_object* v___x_160_; 
v___x_160_ = lp_graduate_x2dmath_PropForm_ctorElim___redArg(v_t_157_, v_var_159_);
return v___x_160_;
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_PropForm_fls_elim___redArg(lean_object* v_t_161_, lean_object* v_fls_162_){
_start:
{
lean_object* v___x_163_; 
v___x_163_ = lp_graduate_x2dmath_PropForm_ctorElim___redArg(v_t_161_, v_fls_162_);
return v___x_163_;
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_PropForm_fls_elim(lean_object* v_motive_164_, lean_object* v_t_165_, lean_object* v_h_166_, lean_object* v_fls_167_){
_start:
{
lean_object* v___x_168_; 
v___x_168_ = lp_graduate_x2dmath_PropForm_ctorElim___redArg(v_t_165_, v_fls_167_);
return v___x_168_;
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_PropForm_conj_elim___redArg(lean_object* v_t_169_, lean_object* v_conj_170_){
_start:
{
lean_object* v___x_171_; 
v___x_171_ = lp_graduate_x2dmath_PropForm_ctorElim___redArg(v_t_169_, v_conj_170_);
return v___x_171_;
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_PropForm_conj_elim(lean_object* v_motive_172_, lean_object* v_t_173_, lean_object* v_h_174_, lean_object* v_conj_175_){
_start:
{
lean_object* v___x_176_; 
v___x_176_ = lp_graduate_x2dmath_PropForm_ctorElim___redArg(v_t_173_, v_conj_175_);
return v___x_176_;
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_PropForm_disj_elim___redArg(lean_object* v_t_177_, lean_object* v_disj_178_){
_start:
{
lean_object* v___x_179_; 
v___x_179_ = lp_graduate_x2dmath_PropForm_ctorElim___redArg(v_t_177_, v_disj_178_);
return v___x_179_;
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_PropForm_disj_elim(lean_object* v_motive_180_, lean_object* v_t_181_, lean_object* v_h_182_, lean_object* v_disj_183_){
_start:
{
lean_object* v___x_184_; 
v___x_184_ = lp_graduate_x2dmath_PropForm_ctorElim___redArg(v_t_181_, v_disj_183_);
return v___x_184_;
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_PropForm_impl_elim___redArg(lean_object* v_t_185_, lean_object* v_impl_186_){
_start:
{
lean_object* v___x_187_; 
v___x_187_ = lp_graduate_x2dmath_PropForm_ctorElim___redArg(v_t_185_, v_impl_186_);
return v___x_187_;
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_PropForm_impl_elim(lean_object* v_motive_188_, lean_object* v_t_189_, lean_object* v_h_190_, lean_object* v_impl_191_){
_start:
{
lean_object* v___x_192_; 
v___x_192_ = lp_graduate_x2dmath_PropForm_ctorElim___redArg(v_t_189_, v_impl_191_);
return v___x_192_;
}
}
LEAN_EXPORT uint8_t lp_graduate_x2dmath_PropForm_eval(lean_object* v_x_193_, lean_object* v_x_194_){
_start:
{
switch(lean_obj_tag(v_x_193_))
{
case 0:
{
lean_object* v_n_195_; lean_object* v___x_196_; uint8_t v___x_197_; 
v_n_195_ = lean_ctor_get(v_x_193_, 0);
lean_inc(v_n_195_);
lean_dec_ref_known(v_x_193_, 1);
v___x_196_ = lean_apply_1(v_x_194_, v_n_195_);
v___x_197_ = lean_unbox(v___x_196_);
return v___x_197_;
}
case 1:
{
uint8_t v___x_198_; 
lean_dec_ref(v_x_194_);
v___x_198_ = 0;
return v___x_198_;
}
case 2:
{
lean_object* v_A_199_; lean_object* v_B_200_; uint8_t v___x_201_; 
v_A_199_ = lean_ctor_get(v_x_193_, 0);
lean_inc(v_A_199_);
v_B_200_ = lean_ctor_get(v_x_193_, 1);
lean_inc(v_B_200_);
lean_dec_ref_known(v_x_193_, 2);
lean_inc_ref(v_x_194_);
v___x_201_ = lp_graduate_x2dmath_PropForm_eval(v_A_199_, v_x_194_);
if (v___x_201_ == 0)
{
lean_dec(v_B_200_);
lean_dec_ref(v_x_194_);
return v___x_201_;
}
else
{
v_x_193_ = v_B_200_;
goto _start;
}
}
case 3:
{
lean_object* v_A_203_; lean_object* v_B_204_; uint8_t v___x_205_; 
v_A_203_ = lean_ctor_get(v_x_193_, 0);
lean_inc(v_A_203_);
v_B_204_ = lean_ctor_get(v_x_193_, 1);
lean_inc(v_B_204_);
lean_dec_ref_known(v_x_193_, 2);
lean_inc_ref(v_x_194_);
v___x_205_ = lp_graduate_x2dmath_PropForm_eval(v_A_203_, v_x_194_);
if (v___x_205_ == 0)
{
v_x_193_ = v_B_204_;
goto _start;
}
else
{
lean_dec(v_B_204_);
lean_dec_ref(v_x_194_);
return v___x_205_;
}
}
default: 
{
lean_object* v_A_207_; lean_object* v_B_208_; uint8_t v___x_209_; 
v_A_207_ = lean_ctor_get(v_x_193_, 0);
lean_inc(v_A_207_);
v_B_208_ = lean_ctor_get(v_x_193_, 1);
lean_inc(v_B_208_);
lean_dec_ref_known(v_x_193_, 2);
lean_inc_ref(v_x_194_);
v___x_209_ = lp_graduate_x2dmath_PropForm_eval(v_A_207_, v_x_194_);
if (v___x_209_ == 0)
{
uint8_t v___x_210_; 
lean_dec(v_B_208_);
lean_dec_ref(v_x_194_);
v___x_210_ = 1;
return v___x_210_;
}
else
{
v_x_193_ = v_B_208_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_PropForm_eval___boxed(lean_object* v_x_212_, lean_object* v_x_213_){
_start:
{
uint8_t v_res_214_; lean_object* v_r_215_; 
v_res_214_ = lp_graduate_x2dmath_PropForm_eval(v_x_212_, v_x_213_);
v_r_215_ = lean_box(v_res_214_);
return v_r_215_;
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Multiset_ndunion___at___00PropForm_vars_spec__0_spec__0_spec__1(lean_object* v_as_216_, size_t v_i_217_, size_t v_stop_218_, lean_object* v_b_219_){
_start:
{
uint8_t v___x_220_; 
v___x_220_ = lean_usize_dec_eq(v_i_217_, v_stop_218_);
if (v___x_220_ == 0)
{
size_t v___x_221_; size_t v___x_222_; lean_object* v___x_223_; uint8_t v___x_224_; 
v___x_221_ = ((size_t)1ULL);
v___x_222_ = lean_usize_sub(v_i_217_, v___x_221_);
v___x_223_ = lean_array_uget_borrowed(v_as_216_, v___x_222_);
v___x_224_ = lp_mathlib_List_elem___at___00List_isPerm___at___00Nat_instDecidableEqPartition_decEq_spec__0_spec__0(v___x_223_, v_b_219_);
if (v___x_224_ == 0)
{
lean_object* v___x_225_; 
lean_inc(v___x_223_);
v___x_225_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_225_, 0, v___x_223_);
lean_ctor_set(v___x_225_, 1, v_b_219_);
v_i_217_ = v___x_222_;
v_b_219_ = v___x_225_;
goto _start;
}
else
{
v_i_217_ = v___x_222_;
goto _start;
}
}
else
{
return v_b_219_;
}
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Multiset_ndunion___at___00PropForm_vars_spec__0_spec__0_spec__1___boxed(lean_object* v_as_228_, lean_object* v_i_229_, lean_object* v_stop_230_, lean_object* v_b_231_){
_start:
{
size_t v_i_boxed_232_; size_t v_stop_boxed_233_; lean_object* v_res_234_; 
v_i_boxed_232_ = lean_unbox_usize(v_i_229_);
lean_dec(v_i_229_);
v_stop_boxed_233_ = lean_unbox_usize(v_stop_230_);
lean_dec(v_stop_230_);
v_res_234_ = lp_graduate_x2dmath___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Multiset_ndunion___at___00PropForm_vars_spec__0_spec__0_spec__1(v_as_228_, v_i_boxed_232_, v_stop_boxed_233_, v_b_231_);
lean_dec_ref(v_as_228_);
return v_res_234_;
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_List_foldrTR___at___00Multiset_ndunion___at___00PropForm_vars_spec__0_spec__0(lean_object* v_init_235_, lean_object* v_l_236_){
_start:
{
lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; uint8_t v___x_240_; 
v___x_237_ = lean_array_mk(v_l_236_);
v___x_238_ = lean_array_get_size(v___x_237_);
v___x_239_ = lean_unsigned_to_nat(0u);
v___x_240_ = lean_nat_dec_lt(v___x_239_, v___x_238_);
if (v___x_240_ == 0)
{
lean_dec_ref(v___x_237_);
return v_init_235_;
}
else
{
size_t v___x_241_; size_t v___x_242_; lean_object* v___x_243_; 
v___x_241_ = lean_usize_of_nat(v___x_238_);
v___x_242_ = ((size_t)0ULL);
v___x_243_ = lp_graduate_x2dmath___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Multiset_ndunion___at___00PropForm_vars_spec__0_spec__0_spec__1(v___x_237_, v___x_241_, v___x_242_, v_init_235_);
lean_dec_ref(v___x_237_);
return v___x_243_;
}
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_Multiset_ndunion___at___00PropForm_vars_spec__0(lean_object* v_s_244_, lean_object* v_t_245_){
_start:
{
lean_object* v___x_246_; 
v___x_246_ = lp_graduate_x2dmath_List_foldrTR___at___00Multiset_ndunion___at___00PropForm_vars_spec__0_spec__0(v_t_245_, v_s_244_);
return v___x_246_;
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_PropForm_vars(lean_object* v_x_247_){
_start:
{
lean_object* v_A_249_; lean_object* v_B_250_; 
switch(lean_obj_tag(v_x_247_))
{
case 0:
{
lean_object* v_n_254_; lean_object* v___x_255_; lean_object* v___x_256_; 
v_n_254_ = lean_ctor_get(v_x_247_, 0);
v___x_255_ = lean_box(0);
lean_inc(v_n_254_);
v___x_256_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_256_, 0, v_n_254_);
lean_ctor_set(v___x_256_, 1, v___x_255_);
return v___x_256_;
}
case 1:
{
lean_object* v___x_257_; 
v___x_257_ = lean_box(0);
return v___x_257_;
}
default: 
{
lean_object* v_A_258_; lean_object* v_B_259_; 
v_A_258_ = lean_ctor_get(v_x_247_, 0);
v_B_259_ = lean_ctor_get(v_x_247_, 1);
v_A_249_ = v_A_258_;
v_B_250_ = v_B_259_;
goto v___jp_248_;
}
}
v___jp_248_:
{
lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; 
v___x_251_ = lp_graduate_x2dmath_PropForm_vars(v_A_249_);
v___x_252_ = lp_graduate_x2dmath_PropForm_vars(v_B_250_);
v___x_253_ = lp_graduate_x2dmath_List_foldrTR___at___00Multiset_ndunion___at___00PropForm_vars_spec__0_spec__0(v___x_252_, v___x_251_);
return v___x_253_;
}
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_PropForm_vars___boxed(lean_object* v_x_260_){
_start:
{
lean_object* v_res_261_; 
v_res_261_ = lp_graduate_x2dmath_PropForm_vars(v_x_260_);
lean_dec(v_x_260_);
return v_res_261_;
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_PropForm_subst(lean_object* v_x_262_, lean_object* v_x_263_, lean_object* v_x_264_){
_start:
{
switch(lean_obj_tag(v_x_262_))
{
case 0:
{
lean_object* v_n_265_; uint8_t v___x_266_; 
v_n_265_ = lean_ctor_get(v_x_262_, 0);
v___x_266_ = lean_nat_dec_eq(v_n_265_, v_x_263_);
if (v___x_266_ == 0)
{
return v_x_262_;
}
else
{
lean_dec_ref_known(v_x_262_, 1);
lean_inc(v_x_264_);
return v_x_264_;
}
}
case 1:
{
return v_x_262_;
}
case 2:
{
lean_object* v_A_267_; lean_object* v_B_268_; lean_object* v___x_270_; uint8_t v_isShared_271_; uint8_t v_isSharedCheck_277_; 
v_A_267_ = lean_ctor_get(v_x_262_, 0);
v_B_268_ = lean_ctor_get(v_x_262_, 1);
v_isSharedCheck_277_ = !lean_is_exclusive(v_x_262_);
if (v_isSharedCheck_277_ == 0)
{
v___x_270_ = v_x_262_;
v_isShared_271_ = v_isSharedCheck_277_;
goto v_resetjp_269_;
}
else
{
lean_inc(v_B_268_);
lean_inc(v_A_267_);
lean_dec(v_x_262_);
v___x_270_ = lean_box(0);
v_isShared_271_ = v_isSharedCheck_277_;
goto v_resetjp_269_;
}
v_resetjp_269_:
{
lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_275_; 
v___x_272_ = lp_graduate_x2dmath_PropForm_subst(v_A_267_, v_x_263_, v_x_264_);
v___x_273_ = lp_graduate_x2dmath_PropForm_subst(v_B_268_, v_x_263_, v_x_264_);
if (v_isShared_271_ == 0)
{
lean_ctor_set(v___x_270_, 1, v___x_273_);
lean_ctor_set(v___x_270_, 0, v___x_272_);
v___x_275_ = v___x_270_;
goto v_reusejp_274_;
}
else
{
lean_object* v_reuseFailAlloc_276_; 
v_reuseFailAlloc_276_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_276_, 0, v___x_272_);
lean_ctor_set(v_reuseFailAlloc_276_, 1, v___x_273_);
v___x_275_ = v_reuseFailAlloc_276_;
goto v_reusejp_274_;
}
v_reusejp_274_:
{
return v___x_275_;
}
}
}
case 3:
{
lean_object* v_A_278_; lean_object* v_B_279_; lean_object* v___x_281_; uint8_t v_isShared_282_; uint8_t v_isSharedCheck_288_; 
v_A_278_ = lean_ctor_get(v_x_262_, 0);
v_B_279_ = lean_ctor_get(v_x_262_, 1);
v_isSharedCheck_288_ = !lean_is_exclusive(v_x_262_);
if (v_isSharedCheck_288_ == 0)
{
v___x_281_ = v_x_262_;
v_isShared_282_ = v_isSharedCheck_288_;
goto v_resetjp_280_;
}
else
{
lean_inc(v_B_279_);
lean_inc(v_A_278_);
lean_dec(v_x_262_);
v___x_281_ = lean_box(0);
v_isShared_282_ = v_isSharedCheck_288_;
goto v_resetjp_280_;
}
v_resetjp_280_:
{
lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_286_; 
v___x_283_ = lp_graduate_x2dmath_PropForm_subst(v_A_278_, v_x_263_, v_x_264_);
v___x_284_ = lp_graduate_x2dmath_PropForm_subst(v_B_279_, v_x_263_, v_x_264_);
if (v_isShared_282_ == 0)
{
lean_ctor_set(v___x_281_, 1, v___x_284_);
lean_ctor_set(v___x_281_, 0, v___x_283_);
v___x_286_ = v___x_281_;
goto v_reusejp_285_;
}
else
{
lean_object* v_reuseFailAlloc_287_; 
v_reuseFailAlloc_287_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_287_, 0, v___x_283_);
lean_ctor_set(v_reuseFailAlloc_287_, 1, v___x_284_);
v___x_286_ = v_reuseFailAlloc_287_;
goto v_reusejp_285_;
}
v_reusejp_285_:
{
return v___x_286_;
}
}
}
default: 
{
lean_object* v_A_289_; lean_object* v_B_290_; lean_object* v___x_292_; uint8_t v_isShared_293_; uint8_t v_isSharedCheck_299_; 
v_A_289_ = lean_ctor_get(v_x_262_, 0);
v_B_290_ = lean_ctor_get(v_x_262_, 1);
v_isSharedCheck_299_ = !lean_is_exclusive(v_x_262_);
if (v_isSharedCheck_299_ == 0)
{
v___x_292_ = v_x_262_;
v_isShared_293_ = v_isSharedCheck_299_;
goto v_resetjp_291_;
}
else
{
lean_inc(v_B_290_);
lean_inc(v_A_289_);
lean_dec(v_x_262_);
v___x_292_ = lean_box(0);
v_isShared_293_ = v_isSharedCheck_299_;
goto v_resetjp_291_;
}
v_resetjp_291_:
{
lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_297_; 
v___x_294_ = lp_graduate_x2dmath_PropForm_subst(v_A_289_, v_x_263_, v_x_264_);
v___x_295_ = lp_graduate_x2dmath_PropForm_subst(v_B_290_, v_x_263_, v_x_264_);
if (v_isShared_293_ == 0)
{
lean_ctor_set(v___x_292_, 1, v___x_295_);
lean_ctor_set(v___x_292_, 0, v___x_294_);
v___x_297_ = v___x_292_;
goto v_reusejp_296_;
}
else
{
lean_object* v_reuseFailAlloc_298_; 
v_reuseFailAlloc_298_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_298_, 0, v___x_294_);
lean_ctor_set(v_reuseFailAlloc_298_, 1, v___x_295_);
v___x_297_ = v_reuseFailAlloc_298_;
goto v_reusejp_296_;
}
v_reusejp_296_:
{
return v___x_297_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_PropForm_subst___boxed(lean_object* v_x_300_, lean_object* v_x_301_, lean_object* v_x_302_){
_start:
{
lean_object* v_res_303_; 
v_res_303_ = lp_graduate_x2dmath_PropForm_subst(v_x_300_, v_x_301_, v_x_302_);
lean_dec(v_x_302_);
lean_dec(v_x_301_);
return v_res_303_;
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath___private_GraduateMath_Discrete__Math_Inductive__Structures_0__PropForm_vars_match__1_splitter___redArg(lean_object* v_x_304_, lean_object* v_h__1_305_, lean_object* v_h__2_306_, lean_object* v_h__3_307_, lean_object* v_h__4_308_, lean_object* v_h__5_309_){
_start:
{
switch(lean_obj_tag(v_x_304_))
{
case 0:
{
lean_object* v_n_310_; lean_object* v___x_311_; 
lean_dec(v_h__5_309_);
lean_dec(v_h__4_308_);
lean_dec(v_h__3_307_);
lean_dec(v_h__2_306_);
v_n_310_ = lean_ctor_get(v_x_304_, 0);
lean_inc(v_n_310_);
lean_dec_ref_known(v_x_304_, 1);
v___x_311_ = lean_apply_1(v_h__1_305_, v_n_310_);
return v___x_311_;
}
case 1:
{
lean_object* v___x_312_; lean_object* v___x_313_; 
lean_dec(v_h__5_309_);
lean_dec(v_h__4_308_);
lean_dec(v_h__3_307_);
lean_dec(v_h__1_305_);
v___x_312_ = lean_box(0);
v___x_313_ = lean_apply_1(v_h__2_306_, v___x_312_);
return v___x_313_;
}
case 2:
{
lean_object* v_A_314_; lean_object* v_B_315_; lean_object* v___x_316_; 
lean_dec(v_h__5_309_);
lean_dec(v_h__4_308_);
lean_dec(v_h__2_306_);
lean_dec(v_h__1_305_);
v_A_314_ = lean_ctor_get(v_x_304_, 0);
lean_inc(v_A_314_);
v_B_315_ = lean_ctor_get(v_x_304_, 1);
lean_inc(v_B_315_);
lean_dec_ref_known(v_x_304_, 2);
v___x_316_ = lean_apply_2(v_h__3_307_, v_A_314_, v_B_315_);
return v___x_316_;
}
case 3:
{
lean_object* v_A_317_; lean_object* v_B_318_; lean_object* v___x_319_; 
lean_dec(v_h__5_309_);
lean_dec(v_h__3_307_);
lean_dec(v_h__2_306_);
lean_dec(v_h__1_305_);
v_A_317_ = lean_ctor_get(v_x_304_, 0);
lean_inc(v_A_317_);
v_B_318_ = lean_ctor_get(v_x_304_, 1);
lean_inc(v_B_318_);
lean_dec_ref_known(v_x_304_, 2);
v___x_319_ = lean_apply_2(v_h__4_308_, v_A_317_, v_B_318_);
return v___x_319_;
}
default: 
{
lean_object* v_A_320_; lean_object* v_B_321_; lean_object* v___x_322_; 
lean_dec(v_h__4_308_);
lean_dec(v_h__3_307_);
lean_dec(v_h__2_306_);
lean_dec(v_h__1_305_);
v_A_320_ = lean_ctor_get(v_x_304_, 0);
lean_inc(v_A_320_);
v_B_321_ = lean_ctor_get(v_x_304_, 1);
lean_inc(v_B_321_);
lean_dec_ref_known(v_x_304_, 2);
v___x_322_ = lean_apply_2(v_h__5_309_, v_A_320_, v_B_321_);
return v___x_322_;
}
}
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath___private_GraduateMath_Discrete__Math_Inductive__Structures_0__PropForm_vars_match__1_splitter(lean_object* v_motive_323_, lean_object* v_x_324_, lean_object* v_h__1_325_, lean_object* v_h__2_326_, lean_object* v_h__3_327_, lean_object* v_h__4_328_, lean_object* v_h__5_329_){
_start:
{
switch(lean_obj_tag(v_x_324_))
{
case 0:
{
lean_object* v_n_330_; lean_object* v___x_331_; 
lean_dec(v_h__5_329_);
lean_dec(v_h__4_328_);
lean_dec(v_h__3_327_);
lean_dec(v_h__2_326_);
v_n_330_ = lean_ctor_get(v_x_324_, 0);
lean_inc(v_n_330_);
lean_dec_ref_known(v_x_324_, 1);
v___x_331_ = lean_apply_1(v_h__1_325_, v_n_330_);
return v___x_331_;
}
case 1:
{
lean_object* v___x_332_; lean_object* v___x_333_; 
lean_dec(v_h__5_329_);
lean_dec(v_h__4_328_);
lean_dec(v_h__3_327_);
lean_dec(v_h__1_325_);
v___x_332_ = lean_box(0);
v___x_333_ = lean_apply_1(v_h__2_326_, v___x_332_);
return v___x_333_;
}
case 2:
{
lean_object* v_A_334_; lean_object* v_B_335_; lean_object* v___x_336_; 
lean_dec(v_h__5_329_);
lean_dec(v_h__4_328_);
lean_dec(v_h__2_326_);
lean_dec(v_h__1_325_);
v_A_334_ = lean_ctor_get(v_x_324_, 0);
lean_inc(v_A_334_);
v_B_335_ = lean_ctor_get(v_x_324_, 1);
lean_inc(v_B_335_);
lean_dec_ref_known(v_x_324_, 2);
v___x_336_ = lean_apply_2(v_h__3_327_, v_A_334_, v_B_335_);
return v___x_336_;
}
case 3:
{
lean_object* v_A_337_; lean_object* v_B_338_; lean_object* v___x_339_; 
lean_dec(v_h__5_329_);
lean_dec(v_h__3_327_);
lean_dec(v_h__2_326_);
lean_dec(v_h__1_325_);
v_A_337_ = lean_ctor_get(v_x_324_, 0);
lean_inc(v_A_337_);
v_B_338_ = lean_ctor_get(v_x_324_, 1);
lean_inc(v_B_338_);
lean_dec_ref_known(v_x_324_, 2);
v___x_339_ = lean_apply_2(v_h__4_328_, v_A_337_, v_B_338_);
return v___x_339_;
}
default: 
{
lean_object* v_A_340_; lean_object* v_B_341_; lean_object* v___x_342_; 
lean_dec(v_h__4_328_);
lean_dec(v_h__3_327_);
lean_dec(v_h__2_326_);
lean_dec(v_h__1_325_);
v_A_340_ = lean_ctor_get(v_x_324_, 0);
lean_inc(v_A_340_);
v_B_341_ = lean_ctor_get(v_x_324_, 1);
lean_inc(v_B_341_);
lean_dec_ref_known(v_x_324_, 2);
v___x_342_ = lean_apply_2(v_h__5_329_, v_A_340_, v_B_341_);
return v___x_342_;
}
}
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath___private_GraduateMath_Discrete__Math_Inductive__Structures_0__PropForm_subst_match__1_splitter___redArg(lean_object* v_x_343_, lean_object* v_x_344_, lean_object* v_x_345_, lean_object* v_h__1_346_, lean_object* v_h__2_347_, lean_object* v_h__3_348_, lean_object* v_h__4_349_, lean_object* v_h__5_350_){
_start:
{
switch(lean_obj_tag(v_x_343_))
{
case 0:
{
lean_object* v_n_351_; lean_object* v___x_352_; 
lean_dec(v_h__5_350_);
lean_dec(v_h__4_349_);
lean_dec(v_h__3_348_);
lean_dec(v_h__2_347_);
v_n_351_ = lean_ctor_get(v_x_343_, 0);
lean_inc(v_n_351_);
lean_dec_ref_known(v_x_343_, 1);
v___x_352_ = lean_apply_3(v_h__1_346_, v_n_351_, v_x_344_, v_x_345_);
return v___x_352_;
}
case 1:
{
lean_object* v___x_353_; 
lean_dec(v_h__5_350_);
lean_dec(v_h__4_349_);
lean_dec(v_h__3_348_);
lean_dec(v_h__1_346_);
v___x_353_ = lean_apply_2(v_h__2_347_, v_x_344_, v_x_345_);
return v___x_353_;
}
case 2:
{
lean_object* v_A_354_; lean_object* v_B_355_; lean_object* v___x_356_; 
lean_dec(v_h__5_350_);
lean_dec(v_h__4_349_);
lean_dec(v_h__2_347_);
lean_dec(v_h__1_346_);
v_A_354_ = lean_ctor_get(v_x_343_, 0);
lean_inc(v_A_354_);
v_B_355_ = lean_ctor_get(v_x_343_, 1);
lean_inc(v_B_355_);
lean_dec_ref_known(v_x_343_, 2);
v___x_356_ = lean_apply_4(v_h__3_348_, v_A_354_, v_B_355_, v_x_344_, v_x_345_);
return v___x_356_;
}
case 3:
{
lean_object* v_A_357_; lean_object* v_B_358_; lean_object* v___x_359_; 
lean_dec(v_h__5_350_);
lean_dec(v_h__3_348_);
lean_dec(v_h__2_347_);
lean_dec(v_h__1_346_);
v_A_357_ = lean_ctor_get(v_x_343_, 0);
lean_inc(v_A_357_);
v_B_358_ = lean_ctor_get(v_x_343_, 1);
lean_inc(v_B_358_);
lean_dec_ref_known(v_x_343_, 2);
v___x_359_ = lean_apply_4(v_h__4_349_, v_A_357_, v_B_358_, v_x_344_, v_x_345_);
return v___x_359_;
}
default: 
{
lean_object* v_A_360_; lean_object* v_B_361_; lean_object* v___x_362_; 
lean_dec(v_h__4_349_);
lean_dec(v_h__3_348_);
lean_dec(v_h__2_347_);
lean_dec(v_h__1_346_);
v_A_360_ = lean_ctor_get(v_x_343_, 0);
lean_inc(v_A_360_);
v_B_361_ = lean_ctor_get(v_x_343_, 1);
lean_inc(v_B_361_);
lean_dec_ref_known(v_x_343_, 2);
v___x_362_ = lean_apply_4(v_h__5_350_, v_A_360_, v_B_361_, v_x_344_, v_x_345_);
return v___x_362_;
}
}
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath___private_GraduateMath_Discrete__Math_Inductive__Structures_0__PropForm_subst_match__1_splitter(lean_object* v_motive_363_, lean_object* v_x_364_, lean_object* v_x_365_, lean_object* v_x_366_, lean_object* v_h__1_367_, lean_object* v_h__2_368_, lean_object* v_h__3_369_, lean_object* v_h__4_370_, lean_object* v_h__5_371_){
_start:
{
switch(lean_obj_tag(v_x_364_))
{
case 0:
{
lean_object* v_n_372_; lean_object* v___x_373_; 
lean_dec(v_h__5_371_);
lean_dec(v_h__4_370_);
lean_dec(v_h__3_369_);
lean_dec(v_h__2_368_);
v_n_372_ = lean_ctor_get(v_x_364_, 0);
lean_inc(v_n_372_);
lean_dec_ref_known(v_x_364_, 1);
v___x_373_ = lean_apply_3(v_h__1_367_, v_n_372_, v_x_365_, v_x_366_);
return v___x_373_;
}
case 1:
{
lean_object* v___x_374_; 
lean_dec(v_h__5_371_);
lean_dec(v_h__4_370_);
lean_dec(v_h__3_369_);
lean_dec(v_h__1_367_);
v___x_374_ = lean_apply_2(v_h__2_368_, v_x_365_, v_x_366_);
return v___x_374_;
}
case 2:
{
lean_object* v_A_375_; lean_object* v_B_376_; lean_object* v___x_377_; 
lean_dec(v_h__5_371_);
lean_dec(v_h__4_370_);
lean_dec(v_h__2_368_);
lean_dec(v_h__1_367_);
v_A_375_ = lean_ctor_get(v_x_364_, 0);
lean_inc(v_A_375_);
v_B_376_ = lean_ctor_get(v_x_364_, 1);
lean_inc(v_B_376_);
lean_dec_ref_known(v_x_364_, 2);
v___x_377_ = lean_apply_4(v_h__3_369_, v_A_375_, v_B_376_, v_x_365_, v_x_366_);
return v___x_377_;
}
case 3:
{
lean_object* v_A_378_; lean_object* v_B_379_; lean_object* v___x_380_; 
lean_dec(v_h__5_371_);
lean_dec(v_h__3_369_);
lean_dec(v_h__2_368_);
lean_dec(v_h__1_367_);
v_A_378_ = lean_ctor_get(v_x_364_, 0);
lean_inc(v_A_378_);
v_B_379_ = lean_ctor_get(v_x_364_, 1);
lean_inc(v_B_379_);
lean_dec_ref_known(v_x_364_, 2);
v___x_380_ = lean_apply_4(v_h__4_370_, v_A_378_, v_B_379_, v_x_365_, v_x_366_);
return v___x_380_;
}
default: 
{
lean_object* v_A_381_; lean_object* v_B_382_; lean_object* v___x_383_; 
lean_dec(v_h__4_370_);
lean_dec(v_h__3_369_);
lean_dec(v_h__2_368_);
lean_dec(v_h__1_367_);
v_A_381_ = lean_ctor_get(v_x_364_, 0);
lean_inc(v_A_381_);
v_B_382_ = lean_ctor_get(v_x_364_, 1);
lean_inc(v_B_382_);
lean_dec_ref_known(v_x_364_, 2);
v___x_383_ = lean_apply_4(v_h__5_371_, v_A_381_, v_B_382_, v_x_365_, v_x_366_);
return v___x_383_;
}
}
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath___private_GraduateMath_Discrete__Math_Inductive__Structures_0__PropForm_eval_match__1_splitter___redArg(lean_object* v_x_384_, lean_object* v_x_385_, lean_object* v_h__1_386_, lean_object* v_h__2_387_, lean_object* v_h__3_388_, lean_object* v_h__4_389_, lean_object* v_h__5_390_){
_start:
{
switch(lean_obj_tag(v_x_384_))
{
case 0:
{
lean_object* v_n_391_; lean_object* v___x_392_; 
lean_dec(v_h__5_390_);
lean_dec(v_h__4_389_);
lean_dec(v_h__3_388_);
lean_dec(v_h__2_387_);
v_n_391_ = lean_ctor_get(v_x_384_, 0);
lean_inc(v_n_391_);
lean_dec_ref_known(v_x_384_, 1);
v___x_392_ = lean_apply_2(v_h__1_386_, v_n_391_, v_x_385_);
return v___x_392_;
}
case 1:
{
lean_object* v___x_393_; 
lean_dec(v_h__5_390_);
lean_dec(v_h__4_389_);
lean_dec(v_h__3_388_);
lean_dec(v_h__1_386_);
v___x_393_ = lean_apply_1(v_h__2_387_, v_x_385_);
return v___x_393_;
}
case 2:
{
lean_object* v_A_394_; lean_object* v_B_395_; lean_object* v___x_396_; 
lean_dec(v_h__5_390_);
lean_dec(v_h__4_389_);
lean_dec(v_h__2_387_);
lean_dec(v_h__1_386_);
v_A_394_ = lean_ctor_get(v_x_384_, 0);
lean_inc(v_A_394_);
v_B_395_ = lean_ctor_get(v_x_384_, 1);
lean_inc(v_B_395_);
lean_dec_ref_known(v_x_384_, 2);
v___x_396_ = lean_apply_3(v_h__3_388_, v_A_394_, v_B_395_, v_x_385_);
return v___x_396_;
}
case 3:
{
lean_object* v_A_397_; lean_object* v_B_398_; lean_object* v___x_399_; 
lean_dec(v_h__5_390_);
lean_dec(v_h__3_388_);
lean_dec(v_h__2_387_);
lean_dec(v_h__1_386_);
v_A_397_ = lean_ctor_get(v_x_384_, 0);
lean_inc(v_A_397_);
v_B_398_ = lean_ctor_get(v_x_384_, 1);
lean_inc(v_B_398_);
lean_dec_ref_known(v_x_384_, 2);
v___x_399_ = lean_apply_3(v_h__4_389_, v_A_397_, v_B_398_, v_x_385_);
return v___x_399_;
}
default: 
{
lean_object* v_A_400_; lean_object* v_B_401_; lean_object* v___x_402_; 
lean_dec(v_h__4_389_);
lean_dec(v_h__3_388_);
lean_dec(v_h__2_387_);
lean_dec(v_h__1_386_);
v_A_400_ = lean_ctor_get(v_x_384_, 0);
lean_inc(v_A_400_);
v_B_401_ = lean_ctor_get(v_x_384_, 1);
lean_inc(v_B_401_);
lean_dec_ref_known(v_x_384_, 2);
v___x_402_ = lean_apply_3(v_h__5_390_, v_A_400_, v_B_401_, v_x_385_);
return v___x_402_;
}
}
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath___private_GraduateMath_Discrete__Math_Inductive__Structures_0__PropForm_eval_match__1_splitter(lean_object* v_motive_403_, lean_object* v_x_404_, lean_object* v_x_405_, lean_object* v_h__1_406_, lean_object* v_h__2_407_, lean_object* v_h__3_408_, lean_object* v_h__4_409_, lean_object* v_h__5_410_){
_start:
{
switch(lean_obj_tag(v_x_404_))
{
case 0:
{
lean_object* v_n_411_; lean_object* v___x_412_; 
lean_dec(v_h__5_410_);
lean_dec(v_h__4_409_);
lean_dec(v_h__3_408_);
lean_dec(v_h__2_407_);
v_n_411_ = lean_ctor_get(v_x_404_, 0);
lean_inc(v_n_411_);
lean_dec_ref_known(v_x_404_, 1);
v___x_412_ = lean_apply_2(v_h__1_406_, v_n_411_, v_x_405_);
return v___x_412_;
}
case 1:
{
lean_object* v___x_413_; 
lean_dec(v_h__5_410_);
lean_dec(v_h__4_409_);
lean_dec(v_h__3_408_);
lean_dec(v_h__1_406_);
v___x_413_ = lean_apply_1(v_h__2_407_, v_x_405_);
return v___x_413_;
}
case 2:
{
lean_object* v_A_414_; lean_object* v_B_415_; lean_object* v___x_416_; 
lean_dec(v_h__5_410_);
lean_dec(v_h__4_409_);
lean_dec(v_h__2_407_);
lean_dec(v_h__1_406_);
v_A_414_ = lean_ctor_get(v_x_404_, 0);
lean_inc(v_A_414_);
v_B_415_ = lean_ctor_get(v_x_404_, 1);
lean_inc(v_B_415_);
lean_dec_ref_known(v_x_404_, 2);
v___x_416_ = lean_apply_3(v_h__3_408_, v_A_414_, v_B_415_, v_x_405_);
return v___x_416_;
}
case 3:
{
lean_object* v_A_417_; lean_object* v_B_418_; lean_object* v___x_419_; 
lean_dec(v_h__5_410_);
lean_dec(v_h__3_408_);
lean_dec(v_h__2_407_);
lean_dec(v_h__1_406_);
v_A_417_ = lean_ctor_get(v_x_404_, 0);
lean_inc(v_A_417_);
v_B_418_ = lean_ctor_get(v_x_404_, 1);
lean_inc(v_B_418_);
lean_dec_ref_known(v_x_404_, 2);
v___x_419_ = lean_apply_3(v_h__4_409_, v_A_417_, v_B_418_, v_x_405_);
return v___x_419_;
}
default: 
{
lean_object* v_A_420_; lean_object* v_B_421_; lean_object* v___x_422_; 
lean_dec(v_h__4_409_);
lean_dec(v_h__3_408_);
lean_dec(v_h__2_407_);
lean_dec(v_h__1_406_);
v_A_420_ = lean_ctor_get(v_x_404_, 0);
lean_inc(v_A_420_);
v_B_421_ = lean_ctor_get(v_x_404_, 1);
lean_inc(v_B_421_);
lean_dec_ref_known(v_x_404_, 2);
v___x_422_ = lean_apply_3(v_h__5_410_, v_A_420_, v_B_421_, v_x_405_);
return v___x_422_;
}
}
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Tactic(uint8_t builtin);
void lean_initialize();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_graduate_x2dmath_GraduateMath_Discrete__Math_Inductive__Structures(uint8_t builtin) {
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
res = initialize_mathlib_Mathlib_Tactic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
