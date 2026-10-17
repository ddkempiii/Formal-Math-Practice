import GraduateMath.Basic

/-!
=============================================================================
## An Exercise with the Factorial Function
=============================================================================
-/

def fac : ℕ → ℕ
  | 0 => 1
  | n + 1 => (n + 1) * fac n

theorem pow_two_le_fac (n : ℕ) : 2 ^ (n - 1) ≤ fac n := by
  rcases n with _ | n
  · simp [fac]
  induction' n with n ih
  · simp [fac]
  · rw [fac, Nat.sub_add_comm _, pow_succ']
    apply Nat.mul_le_mul
    rw [← Nat.succ_eq_add_one, ← Nat.succ_eq_add_one]
    exact (Nat.two_le_iff n.succ.succ).mpr ⟨Nat.succ_ne_zero n.succ, Nat.succ_succ_ne_one n⟩
    assumption; linarith

/-!
=============================================================================
## Construction of the Natural Numbers
=============================================================================
In this section, we construct a copy of the natural numbers with a defined addition
and multiplication, and prove the usual associativity, commutativity, and distributivity properties.-/

inductive MyNat where
  | zero : MyNat
  | succ : MyNat → MyNat

namespace MyNat

def add : MyNat → MyNat → MyNat
  | x, zero => x
  | x, succ y => succ (add x y)

def mul : MyNat → MyNat → MyNat
  | _, zero => zero
  | x, succ y => add (mul x y) x

theorem zero_add (n : MyNat) : add zero n = n := by
  induction' n with n ih
  · rfl
  rw [add, ih]

theorem succ_add (m n : MyNat) : add (succ m) n = succ (add m n) := by
  induction' n with n ih
  · rfl
  rw [add, ih]
  rfl

theorem add_comm (m n : MyNat) : add m n = add n m := by
  induction' n with n ih
  · rw [zero_add]
    rfl
  rw [add, succ_add, ih]

theorem add_assoc (m n k : MyNat) : add (add m n) k = add m (add n k) := by
  induction' k with k ih
  · rw [add, add]
  rw [add, add, ih, add]


theorem mul_add (m n k : MyNat) : mul m (add n k) = add (mul m n) (mul m k) := by
  induction' k with k ih
  · rw [add, mul, add]
  rw [add, mul, ih, mul, add_assoc]

theorem zero_mul (n : MyNat) : mul zero n = zero := by
  induction' n with n ih
  · rfl
  rw [mul, add, ih]

theorem succ_mul (m n : MyNat) : mul (succ m) n = add (mul m n) n := by
  induction' n with n ih
  · rfl
  rw [mul, ih, add, mul, add, add_assoc, add_comm n m, add_assoc]

theorem mul_comm (m n : MyNat) : mul m n = mul n m := by
  induction' n with n ih
  · rw [mul, zero_mul]
  rw [mul, succ_mul, ih]

end MyNat
