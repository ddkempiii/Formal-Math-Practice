import Mathlib.Algebra.Ring.Defs
import GraduateMath.Basic

/-! Here we prove some basic facts relating to rings and groups. Notably,
the inverse law for group products is deduced without assumed commutativity of
multiplication by the inverse or by 1.
-/

namespace MyRing
variable {R : Type*} [Ring R]

theorem add_neg_cancel_right (a b : R) : a + b + -b = a := by
  rw [add_assoc, add_neg_cancel, add_zero]

theorem add_left_cancel {a b c : R} (h : a + b = a + c) : b = c := by
  rw [← neg_add_cancel_left a b, h, neg_add_cancel_left]

theorem add_right_cancel {a b c : R} (h : a + b = c + b) : a = c := by
  rw [← add_neg_cancel_right a b, h, add_neg_cancel_right]

theorem zero_mul (a : R) : 0 * a = 0 := by
  have h : 0 * a + 0 * a = 0*a + 0 := by
    rw [← add_mul, add_zero, add_zero]
  rw [add_left_cancel h]

theorem neg_eq_of_add_eq_zero {a b : R} (h : a + b = 0) : -a = b := by
  rw[← neg_add_cancel_left a b, h, add_zero]

theorem eq_neg_of_add_eq_zero {a b : R} (h : a + b = 0) : a = -b := by
  rw[← add_neg_cancel_right a b, h, zero_add]


theorem neg_neg (a : R) : - -a = a := by
  apply neg_eq_of_add_eq_zero
  rw [neg_add_cancel]

end MyRing

section
variable {G : Type*} [Group G]

namespace MyGroup

/-! Only these properties are used to obtain `MyGroup.mul_left_cancel`, `MyGroup.mul_one`, `MyGroup.mul_inv_rev`.-/
#check (mul_assoc : ∀ a b c : G, a * b * c = a * (b * c))
#check (one_mul : ∀ a : G, 1 * a = a)
#check (inv_mul_cancel : ∀ a : G, a⁻¹ * a = 1)

theorem mul_left_cancel {a b c : G} (h : b * a = b * c) : a = c := by
  rw [← one_mul a, ← inv_mul_cancel b, mul_assoc, h, ← mul_assoc, inv_mul_cancel, one_mul]

theorem conj_of_inverse (a : G) : a = a * (a⁻¹ * a) := by
  have h' : a⁻¹ * a = a⁻¹ * (a * a⁻¹ * a) := by
    rw [inv_mul_cancel, ← mul_assoc, ← mul_assoc, inv_mul_cancel, mul_assoc, inv_mul_cancel, one_mul]
  rw[← mul_assoc]
  exact mul_left_cancel h'

theorem conj_by_inverse (a : G) : a⁻¹ = a⁻¹ * (a * a⁻¹) := by
  rw[← mul_assoc, inv_mul_cancel, one_mul]

theorem mul_one (a : G) : a * 1 = a := by
  have h : a * (a⁻¹ * a) = a := by
    symm
    exact conj_of_inverse a
  rw [← inv_mul_cancel a]
  exact h

theorem mul_inv_cancel (a : G) : a * a⁻¹ = 1 := by
  have h : a⁻¹ * (a * a⁻¹) = a⁻¹ * 1 := by
    rw [mul_one]
    symm
    exact conj_by_inverse a
  exact mul_left_cancel h


theorem mul_inv_rev (a b : G) : (a * b)⁻¹ = b⁻¹ * a⁻¹ := by
  rw [← mul_one (a * b)⁻¹, ← mul_inv_cancel a, ← one_mul a⁻¹, ← mul_inv_cancel b]
  rw [← mul_assoc, mul_assoc, ← mul_assoc a (b * b⁻¹) a⁻¹, ← mul_assoc, ← mul_assoc a b b⁻¹, ← mul_assoc]
  rw [inv_mul_cancel, mul_inv_cancel, one_mul, one_mul]

end MyGroup
