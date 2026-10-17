import Mathlib.Data.Nat.Prime.Basic
import GraduateMath.Basic


theorem two_le {m : ℕ} (h0 : m ≠ 0) (h1 : m ≠ 1) : 2 ≤ m := by
  cases m; contradiction
  case succ m =>
    cases m; contradiction
    repeat apply Nat.succ_le_succ
    apply zero_le

theorem two_le_of_mod_4_eq_3 {n : ℕ} (h : n % 4 = 3) : 2 ≤ n := by
  apply two_le <;>
    · intro neq
      rw [neq] at h
      norm_num at h

theorem mod_4_eq_3_or_mod_4_eq_3 {m n : ℕ} (h : m * n % 4 = 3) : m % 4 = 3 ∨ n % 4 = 3 := by
  revert h
  rw [Nat.mul_mod]
  have : m % 4 < 4 := Nat.mod_lt m (by norm_num)
  interval_cases m % 4 <;> simp [-Nat.mul_mod_mod]
  have : n % 4 < 4 := Nat.mod_lt n (by norm_num)
  interval_cases n % 4 <;> simp

theorem exists_prime_factor_mod_4_eq_3 {n : Nat} (h : n % 4 = 3) :
    ∃ p : Nat, p.Prime ∧ p ∣ n ∧ p % 4 = 3 := by
  by_cases np : n.Prime
  · use n
  induction' n using Nat.strong_induction_on with n ih
  rw [Nat.prime_def_lt] at np
  push Not at np
  rcases np (two_le_of_mod_4_eq_3 h) with ⟨m, mltn, mdvdn, mne1⟩
  have mge2 : 2 ≤ m := by
    apply two_le _ mne1
    intro mz
    rw [mz, zero_dvd_iff] at mdvdn
    linarith
  have neq : m * (n / m) = n := Nat.mul_div_cancel' mdvdn
  have : m % 4 = 3 ∨ n / m % 4 = 3 := by
    apply mod_4_eq_3_or_mod_4_eq_3
    rw [neq, h]
  rcases this with h1 | h1
  . by_cases mp : m.Prime
    · use m
    rcases ih m mltn h1 mp with ⟨p, pp, pdvd, pmf⟩
    use p, pp, pdvd.trans mdvdn
  . have divltn : n/m < n := by
      apply Nat.div_lt_self
      exact lt_trans zero_lt_one  (Nat.lt_of_succ_le (two_le_of_mod_4_eq_3 h))
      exact Nat.lt_of_succ_le mge2
    by_cases divp : (n/m).Prime
    · use n/m, divp, Nat.div_dvd_of_dvd mdvdn
    rcases ih (n/m) divltn h1 divp with ⟨p, pp, pdvd, pmod4⟩
    use p, pp, pdvd.trans (Nat.div_dvd_of_dvd mdvdn)

open Finset

theorem ex_finset_of_bounded (Q : ℕ → Prop) [DecidablePred Q] :
    (∃ n, ∀ k, Q k → k ≤ n) → ∃ s : Finset ℕ, ∀ k, Q k ↔ k ∈ s := by
  rintro ⟨n, hn⟩
  use (range (n + 1)).filter Q
  intro k
  simp
  exact hn k

theorem aux {m n : ℕ} (h₀ : m ∣ n) (h₁ : 2 ≤ m) (h₂ : m < n) : n / m ∣ n ∧ n / m < n := by
  constructor
  exact Nat.div_dvd_of_dvd h₀
  apply Nat.div_lt_self
  apply lt_trans _ h₂;
  have : m > 0 := by exact lt_trans zero_lt_one (Nat.lt_of_succ_le h₁)
  assumption
  exact Nat.lt_of_succ_le h₁

theorem mem_of_dvd_prod_primes {s : Finset ℕ} {p : ℕ} (prime_p : p.Prime) :
    (∀ n ∈ s, Nat.Prime n) → (p ∣ ∏ n ∈ s, n) → p ∈ s := by
  intro h₀ h₁
  induction' s using Finset.induction_on with a s ans ih
  · simp at h₁
    linarith [prime_p.two_le]
  simp [Finset.prod_insert ans, prime_p.dvd_mul] at h₀ h₁
  rw [mem_insert]
  rcases h₁ with h' | h'
  left; exact (Nat.prime_dvd_prime_iff_eq prime_p h₀.left).mp h'
  right; exact ih h₀.right h'

theorem primes_mod_4_eq_3_infinite : ∀ n, ∃ p > n, Nat.Prime p ∧ p % 4 = 3 := by
  by_contra h
  push Not at h
  rcases h with ⟨n, hn⟩
  have : ∃ s : Finset Nat, ∀ p : ℕ, p.Prime ∧ p % 4 = 3 ↔ p ∈ s := by
    apply ex_finset_of_bounded
    use n
    contrapose! hn
    rcases hn with ⟨p, ⟨pp, p4⟩, pltn⟩
    exact ⟨p, pltn, pp, p4⟩
  rcases this with ⟨s, hs⟩
  have h₁ : ((4 * ∏ i ∈ erase s 3, i) + 3) % 4 = 3 := by
    rw [add_comm, Nat.add_mul_mod_self_left]
  rcases exists_prime_factor_mod_4_eq_3 h₁ with ⟨p, pp, pdvd, p4eq⟩
  have ps : p ∈ s := (hs p).mp ⟨pp, p4eq⟩
  have pne3 : p ≠ 3 := by
    intro p3
    rw [p3] at pdvd
    have : 3 ∣ 4 * ∏ i ∈ erase s 3, i := by
      rw [← Nat.add_sub_cancel (4*∏ i ∈ s.erase 3, i) 3]
      exact Nat.dvd_sub pdvd dvd_rfl
    rcases (Nat.Prime.dvd_mul Nat.prime_three).mp this with hdvd | hdvd
    · contradiction
    have : ∀ i ∈ s.erase 3, Nat.Prime i := by
      intro i is
      apply ((hs i).mpr (erase_subset 3 s is)).left
    apply (mem_erase.mp (mem_of_dvd_prod_primes Nat.prime_three this hdvd)).left
    rfl
  have : p ∣ 4 * ∏ i ∈ erase s 3, i := by
    apply Nat.dvd_mul_left_of_dvd
    apply dvd_prod_of_mem
    simp [mem_erase]; exact ⟨pne3, ps⟩

  have : p ∣ 3 := by
    convert Nat.dvd_sub pdvd this; simp
  have : p = 3 := by
    absurd pne3
    rcases Nat.Prime.eq_one_or_self_of_dvd Nat.prime_three p this with heq | heq
    · rw [heq] at pp; contradiction
    assumption
  contradiction
