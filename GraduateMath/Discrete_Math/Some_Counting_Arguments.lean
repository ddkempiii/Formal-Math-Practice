import GraduateMath.Basic
import Mathlib.Combinatorics.Pigeonhole
open Fintype
open Finset

def triangle (n : ℕ) : Finset (ℕ × ℕ) := {p ∈ range (n+1) ×ˢ range (n+1) | p.1 < p.2}

example (n : ℕ) : #(triangle n) = (n + 1) * n / 2 := by
  apply Nat.eq_div_of_mul_eq_right (by norm_num)
  let turn (p : ℕ × ℕ) : ℕ × ℕ := (n - 1 - p.1, n - p.2)
  calc 2 * #(triangle n)
      = #(triangle n) + #(triangle n) := by
          ring
    _ = #(triangle n) + #(triangle n |>.image turn) := by
          rw [Finset.card_image_of_injOn]; rintro ⟨x₁, x₂⟩ xit ⟨y₁, y₂⟩ yit
          simp [turn]; simp_all [triangle]; omega
    _ = #(range n ×ˢ range (n + 1)) := by
          rw [← card_union_of_disjoint]; congr
          ext x; rcases x with ⟨x₁, x₂⟩; simp [triangle, turn]; constructor
          · rintro (h|h) <;> omega
          · by_cases x1ltx2 : x₁ < x₂
            intro ; left; omega
            push Not at x1ltx2; intro; right; use (n-1-x₁), (n-x₂); omega
          simp [disjoint_iff_ne]; simp[triangle, turn]; omega
    _ = (n + 1) * n := by
          rw [card_product, mul_comm]; simp

  def triangle' (n : ℕ) : Finset (ℕ × ℕ) := {p ∈ range n ×ˢ range n | p.1 ≤ p.2}

  example (n : ℕ) : #(triangle' n) = #(triangle n) := by
    let sub1 (p : ℕ × ℕ ) : ℕ × ℕ := (p.1, p.2 -1)
    have : Set.InjOn sub1 ↑(triangle n) := by
      rintro ⟨x₁₁, x₁₂⟩ x1it ⟨x₂₁, x₂₂⟩ x2it xeq
      simp [sub1, triangle] at *; omega
    rw [← Finset.card_image_of_injOn this]; congr
    ext x; rcases x with ⟨x1, x2⟩; rw [mem_image]; simp [triangle', triangle, sub1]; constructor; intro xin; use x2+1
    simp [xin]; omega
    rintro _
    omega

lemma diff_one_of_eq_dvd (m k : ℕ) (h : m ≠ k) (h' : m / 2 = k / 2) : m = k + 1 ∨ k = m + 1 := by omega

example {n : ℕ} (A : Finset ℕ)
    (hA : #(A) = n + 1)
    (hA' : A ⊆ range (2 * n)) :
    ∃ m ∈ A, ∃ k ∈ A, Nat.Coprime m k := by
  have : ∃ t ∈ range n, 1 < #({u ∈ A | u / 2 = t}) := by
    apply exists_lt_card_fiber_of_mul_lt_card_of_maps_to
    · intro a aA; simp; apply (Nat.div_lt_iff_lt_mul (by norm_num)).mpr
      rw [mul_comm]; apply mem_range.mp; exact hA' aA
    · simp; rw [hA]; linarith
  rcases this with ⟨t, ht, ht'⟩
  simp only [one_lt_card, mem_filter] at ht'
  rcases ht' with ⟨a', ⟨ap1, ap2⟩, b', ⟨bp1, bp2⟩, aneb⟩
  use a', ap1, b', bp1
  rcases diff_one_of_eq_dvd a' b' aneb (_root_.trans ap2 bp2.symm) with (h|h) <;> rw [h] <;> norm_num
