// Lean compiler output
// Module: GraduateMath.Algebra.Linear_Algebra
// Imports: public import Init public meta import Init public import Mathlib.LinearAlgebra.Matrix.Determinant.Basic public import Mathlib.LinearAlgebra.Eigenspace.Minpoly public import Mathlib.LinearAlgebra.Charpoly.Basic public import GraduateMath.Basic
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
LEAN_EXPORT lean_object* lp_graduate_x2dmath_preimage___redArg();
LEAN_EXPORT lean_object* lp_graduate_x2dmath_preimage___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_preimage(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_preimage___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_graduate_x2dmath_preimage___redArg(){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_box(0);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_preimage___redArg___boxed(lean_object* v___dummy_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = lp_graduate_x2dmath_preimage___redArg();
return v_res_4_;
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_preimage(lean_object* v_K_5_, lean_object* v_inst_6_, lean_object* v_V_7_, lean_object* v_inst_8_, lean_object* v_inst_9_, lean_object* v_W_10_, lean_object* v_inst_11_, lean_object* v_inst_12_, lean_object* v_00_u03c6_13_, lean_object* v_H_14_){
_start:
{
lean_object* v___x_15_; 
v___x_15_ = lean_box(0);
return v___x_15_;
}
}
LEAN_EXPORT lean_object* lp_graduate_x2dmath_preimage___boxed(lean_object* v_K_16_, lean_object* v_inst_17_, lean_object* v_V_18_, lean_object* v_inst_19_, lean_object* v_inst_20_, lean_object* v_W_21_, lean_object* v_inst_22_, lean_object* v_inst_23_, lean_object* v_00_u03c6_24_, lean_object* v_H_25_){
_start:
{
lean_object* v_res_26_; 
v_res_26_ = lp_graduate_x2dmath_preimage(v_K_16_, v_inst_17_, v_V_18_, v_inst_19_, v_inst_20_, v_W_21_, v_inst_22_, v_inst_23_, v_00_u03c6_24_, v_H_25_);
lean_dec(v_00_u03c6_24_);
lean_dec(v_inst_23_);
lean_dec_ref(v_inst_22_);
lean_dec(v_inst_20_);
lean_dec_ref(v_inst_19_);
lean_dec_ref(v_inst_17_);
return v_res_26_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_LinearAlgebra_Matrix_Determinant_Basic(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_LinearAlgebra_Eigenspace_Minpoly(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_LinearAlgebra_Charpoly_Basic(uint8_t builtin);
lean_object* initialize_graduate_x2dmath_GraduateMath_Basic(uint8_t builtin);
void lean_initialize();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_graduate_x2dmath_GraduateMath_Algebra_Linear__Algebra(uint8_t builtin) {
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
res = initialize_mathlib_Mathlib_LinearAlgebra_Matrix_Determinant_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_LinearAlgebra_Eigenspace_Minpoly(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_LinearAlgebra_Charpoly_Basic(builtin);
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
