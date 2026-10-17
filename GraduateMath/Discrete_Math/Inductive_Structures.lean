import Mathlib.Tactic

/-!
=============================================================================
## Lists
=============================================================================
This section establishes some theorems via induction relating to reversing lists.
-/

namespace MyListSpace

variable {α β γ : Type*}
variable (as bs cs : List α)
variable (a b c : α)

open List


def reverse : List α → List α
  | [] => []
  | a :: as => reverse as ++ a :: []

#eval reverse [1, 2, 3, 4, 5]

theorem reverse_append (as bs : List α) : reverse (as ++ bs) = reverse bs ++ reverse as := by
  induction' as with a as ih
  · simp; rfl
  · rw [cons_append, reverse, ih, append_assoc, reverse]


lemma reverse_single_eq_self (a : α) : reverse (a :: []) = a :: [] := by
  rw [reverse, reverse]; simp

theorem reverse_reverse (as : List α) : reverse (reverse as) = as := by
  induction' as with a as ih
  · rw [reverse, reverse]
  · rw [reverse, reverse_append, ih, reverse_single_eq_self]; simp

end MyListSpace

/-!
=============================================================================
## Binary Trees
=============================================================================
This section establishes some theorems via induction relating to size, depth, and flips of binary trees.
-/

inductive BinTree where
  | empty : BinTree
  | node  : BinTree → BinTree → BinTree

namespace BinTree

def size : BinTree → ℕ
  | empty    => 0
  | node l r => size l + size r + 1

def depth : BinTree → ℕ
  | empty    => 0
  | node l r => max (depth l) (depth r) + 1


theorem depth_le_size : ∀ t : BinTree, depth t ≤ size t
  | empty =>  Nat.zero_le _
  | node l r => by
    rw [depth, size]
    calc max (depth l) (depth r) + 1
      ≤ depth l + depth r + 1 := by gcongr; omega
    _ ≤ size l + size r + 1 := by gcongr <;> apply depth_le_size

def flip : BinTree → BinTree
  | empty =>  empty
  | node l r => node (flip r) (flip l)

example: flip  (node (node empty (node empty empty)) (node empty empty)) =
    node (node empty empty) (node (node empty empty) empty) := rfl

theorem size_flip : ∀ t, size (flip t) = size t
  | empty =>  rfl
  | node l r => by rw [flip, size, size_flip, size_flip, add_comm r.size l.size, size]

end BinTree

/-!
=============================================================================
## An Inductive Approach to Propositional Logic
=============================================================================
This section establishes some theorems  via induction relating to substitution of propositional formulae.
-/

inductive PropForm : Type where
  | var (n : ℕ)           : PropForm
  | fls                   : PropForm
  | conj (A B : PropForm) : PropForm
  | disj (A B : PropForm) : PropForm
  | impl (A B : PropForm) : PropForm
namespace PropForm

def eval : PropForm → (ℕ → Bool) → Bool
  | var n,    v => v n
  | fls,      _ => false
  | conj A B, v => A.eval v && B.eval v
  | disj A B, v => A.eval v || B.eval v
  | impl A B, v => ! A.eval v || B.eval v

def vars : PropForm → Finset ℕ
  | var n    => {n}
  | fls      => ∅
  | conj A B => A.vars ∪ B.vars
  | disj A B => A.vars ∪ B.vars
  | impl A B => A.vars ∪ B.vars

def subst : PropForm → ℕ → PropForm → PropForm
  | var n,    m, C => if n = m then C else var n
  | fls,      _, _ => fls
  | conj A B, m, C => conj (A.subst m C) (B.subst m C)
  | disj A B, m, C => disj (A.subst m C) (B.subst m C)
  | impl A B, m, C => impl (A.subst m C) (B.subst m C)

theorem subst_eq_of_not_mem_vars : ∀ (A : PropForm) (n : ℕ) (C : PropForm), n ∉ A.vars → A.subst n C = A
  | var m, n, C, h => by simp_all [vars, subst]; intro h'; exfalso; exact h h'.symm
  | fls, _, _, _ =>   by simp_all [subst]
  | conj A B, n, C, h => by simp_all [vars, subst, subst_eq_of_not_mem_vars]
  | disj A B, n, C, h => by simp_all [vars, subst, subst_eq_of_not_mem_vars]
  | impl A B, n, C, h => by simp_all [vars, subst, subst_eq_of_not_mem_vars]

theorem subst_eval_eq (A : PropForm) (n : ℕ) (C : PropForm) (v : ℕ → Bool) :
  (A.subst n C).eval v = A.eval (fun m => if m = n then C.eval v else v m) := by
  cases A <;> simp_all [subst, eval, subst_eval_eq]; rename_i n'; by_cases h : n' = n
  simp [ite_eq_left h]; simp [ite_eq_right h, eval]
