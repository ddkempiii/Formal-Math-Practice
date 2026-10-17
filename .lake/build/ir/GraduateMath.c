// Lean compiler output
// Module: GraduateMath
// Imports: public import Init public meta import Init public import GraduateMath.Basic public import GraduateMath.Topology.Metric_Spaces public import GraduateMath.Algebra.Basic public import GraduateMath.Algebra.Some_Facts_About_Algebraic_Structures public import GraduateMath.Algebra.Linear_Algebra public import GraduateMath.Discrete_Math.Inductive_Structures public import GraduateMath.Discrete_Math.Some_Counting_Arguments public import GraduateMath.NumberTheory.Elementary public import GraduateMath.NumberTheory.Some_Induction_Practice
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
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_graduate_x2dmath_GraduateMath_Basic(uint8_t builtin);
lean_object* initialize_graduate_x2dmath_GraduateMath_Topology_Metric__Spaces(uint8_t builtin);
lean_object* initialize_graduate_x2dmath_GraduateMath_Algebra_Basic(uint8_t builtin);
lean_object* initialize_graduate_x2dmath_GraduateMath_Algebra_Some__Facts__About__Algebraic__Structures(uint8_t builtin);
lean_object* initialize_graduate_x2dmath_GraduateMath_Algebra_Linear__Algebra(uint8_t builtin);
lean_object* initialize_graduate_x2dmath_GraduateMath_Discrete__Math_Inductive__Structures(uint8_t builtin);
lean_object* initialize_graduate_x2dmath_GraduateMath_Discrete__Math_Some__Counting__Arguments(uint8_t builtin);
lean_object* initialize_graduate_x2dmath_GraduateMath_NumberTheory_Elementary(uint8_t builtin);
lean_object* initialize_graduate_x2dmath_GraduateMath_NumberTheory_Some__Induction__Practice(uint8_t builtin);
void lean_initialize();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_graduate_x2dmath_GraduateMath(uint8_t builtin) {
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
res = initialize_graduate_x2dmath_GraduateMath_Topology_Metric__Spaces(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_graduate_x2dmath_GraduateMath_Algebra_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_graduate_x2dmath_GraduateMath_Algebra_Some__Facts__About__Algebraic__Structures(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_graduate_x2dmath_GraduateMath_Algebra_Linear__Algebra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_graduate_x2dmath_GraduateMath_Discrete__Math_Inductive__Structures(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_graduate_x2dmath_GraduateMath_Discrete__Math_Some__Counting__Arguments(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_graduate_x2dmath_GraduateMath_NumberTheory_Elementary(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_graduate_x2dmath_GraduateMath_NumberTheory_Some__Induction__Practice(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
