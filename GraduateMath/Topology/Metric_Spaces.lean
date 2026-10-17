import Mathlib.Topology.Instances.Real.Lemmas
import Mathlib.Analysis.Normed.Operator.BanachSteinhaus
import GraduateMath.Basic


open Set Filter
open Topology Filter

variable {X : Type*} [MetricSpace X] (a b c : X)

example {u : ℕ → X} (hu : Tendsto u atTop (𝓝 a)) {s : Set X} (hs : ∀ n, u n ∈ s) :
    a ∈ closure s := by
  by_contra h; rw [← Set.mem_compl_iff (closure s) a] at h
  set C := (closure s)ᶜ with Cdef
  have ball : ∃ ε > 0, Metric.ball a ε ⊆ C := by
    apply (Metric.isOpen_iff ).mp _ a h
    apply isOpen_compl_iff.mpr
    exact isClosed_closure
  have : ∀ᶠ (n: ℕ) in atTop, u n ∈ C := hu (Metric.nhds_basis_ball.mem_iff.mpr ball)
  absurd this; simp [Cdef]
  intro x; use x, le_refl _, subset_closure (hs x)

example {X : Type*} [MetricSpace X] [CompactSpace X]
      {Y : Type*} [MetricSpace Y] {f : X → Y}
    (hf : Continuous f) : UniformContinuous f := by
  rw [Metric.uniformContinuous_iff]
  intro ε epos
  set φ := fun (p : X × X) ↦ dist (f p.1) (f p.2) with pdef
  set K := {p : X × X | ε ≤ φ p}
  have cphi : Continuous φ := (hf.comp continuous_fst).dist (hf.comp continuous_snd)
  have cptK : IsCompact K := by
    apply IsClosed.isCompact
    apply isClosed_le; continuity; assumption
  rcases eq_empty_or_nonempty K with h|h
  use 1, by norm_num
  intro a b _
  contrapose! h
  use ⟨a, b⟩; exact h
  rcases cptK.exists_isMinOn h continuous_dist.continuousOn with ⟨m, mink, hm⟩
  use (dist m.1 m.2)
  constructor
  show dist m.1 m.2 > 0
  · rcases le_iff_eq_or_lt.mp (dist_nonneg (x := m.1) (y := m.2)) with h' | h'
    rw [mem_ofPred_eq, pdef] at mink; dsimp at mink
    rw [eq_comm, dist_eq_zero] at h'; simp [h'] at mink
    linarith
    assumption
  intro a b abl
  rw [isMinOn_iff] at hm
  contrapose! hm
  use ⟨a,b⟩, hm


open BigOperators

open Finset

theorem cauchySeq_of_le_geometric_two' {u : ℕ → X}
    (hu : ∀ n : ℕ, dist (u n) (u (n + 1)) ≤ (1 / 2) ^ n) : CauchySeq u := by
  rw [Metric.cauchySeq_iff']

  /- We extract the desired integer N from the convergence to 0 of (1/2)^n. -/
  intro ε ε_pos
  obtain ⟨N, hN⟩ : ∃ N : ℕ, (1 / 2) ^ N * 2 < ε := by
    have e2_pos : ε/2 > 0 := by norm_num [ε_pos]
    rcases Metric.tendsto_atTop.mp (tendsto_pow_atTop_nhds_zero_of_lt_one (𝕜 := ℝ) (r := 1/2) (by norm_num) (by norm_num)) (ε/2) e2_pos with ⟨N, hN⟩
    use N
    have := hN N le_rfl
    rw [Real.dist_0_eq_abs ((1/2)^N), abs_of_nonneg (by norm_num)] at this
    calc
      (1 / 2) ^ N * 2 < ε/2 * 2 := by apply mul_lt_mul_of_pos_right this (by norm_num)
      _ = ε := by norm_num
  use N
  intro n hn
  /-Set the stage for a telescoping-sum argument. -/
  obtain ⟨k, rfl : n = N + k⟩ := le_iff_exists_add.mp hn
  calc
    dist (u (N + k)) (u N) = dist (u (N + 0)) (u (N + k)) := by rw [dist_comm]; apply congr_arg; rfl
    _ ≤ ∑ i  ∈ range k, dist (u (N + i)) (u (N + (i + 1))) := by
        /-The proof follows simply via the triangle inequality due to the inductive formulation of Finset.sum_range_succ. -/
        induction' k with k hk; simp
        rw [← add_assoc]
        apply le_trans (dist_triangle (u (N+0)) (u (N+k)) _)
        rw [Finset.sum_range_succ]; gcongr; exact hk (by norm_num); rw [← add_assoc]
    _ ≤ ∑ i  ∈ range k, (1 / 2 : ℝ) ^ (N + i) := by gcongr ; rw [← add_assoc]; exact hu (N+i)
    _ = (1 / 2) ^ N * ∑ i  ∈ range k, (1 / 2 : ℝ) ^ i := by rw [Finset.mul_sum]; congr; ext i; exact pow_add (1/2 : ℝ) N i
    _ ≤ (1 / 2) ^ N * 2 := by
      gcongr
      rcases Nat.eq_zero_or_eq_succ_pred k with (H | H)
      simp [H]
      /-Observe that the finite sum can be bounded by 2 since the residual tail for the full geometric series is the difference.
      The latter can be formalized with a simple inductive trick.-/
      have S : (∑ i ∈ range k, (1/2 : ℝ)^i) + (1/2)^ (k-1) = 2 := by
        induction' k with k ih'
        simp
        contradiction
        by_cases K : k = k.pred.succ
        · rw [← add_neg_cancel_right (∑ i ∈ range (k + 1), (1 / 2) ^ i) ((1/2)^(k-1)), Finset.sum_range_succ, add_assoc (∑ x ∈ Finset.range k, (1 / 2) ^ x), add_comm ((1/2)^ k)]
          rw [← add_assoc, ih' (by norm_num) K, add_assoc, add_assoc, add_comm (-(1/2)^(k-1))]
          calc
            (2 : ℝ) + ((1 / 2) ^ k + ((1 / 2) ^ (k + 1 - 1) + -(1 / 2) ^ (k - 1))) = 2 + ((1 / 2) ^ k + ((1 / 2) ^ k + -(1 / 2) ^ (k - 1))) := by congr
            _ = 2 + ((1 / 2) ^ (k-1) + -(1 / 2) ^ (k - 1)) := by rw [← add_assoc ((1/2)^k), ← one_mul ((1/2)^k), ← add_mul, one_add_one_eq_two ]; congr; conv_lhs => arg 2; rw [(Nat.sub_add_cancel (n := k) (m := 1) (by linarith [K])).symm]; rw [pow_succ'];; rw [← mul_assoc, one_div 2]; ring
            _ = 2 := by ring
        have : k =0 := by contrapose! K; exact (Nat.succ_pred_eq_of_ne_zero K).symm
        simp [this]; ring
      /-Since the residual tail is a positive value, we finish with a simple appeal to transitivity.-/
      have : 0 ≤ (1/2 : ℝ) ^ (k-1) := by apply pow_nonneg; norm_num
      apply le_trans (le_add_of_nonneg_right this) (by rw [S])
    _ < ε := hN

open Metric

example [CompleteSpace X] (f : ℕ → Set X) (ho : ∀ n, IsOpen (f n)) (hd : ∀ n, Dense (f n)) :
    Dense (⋂ n, f n) := by
  let B : ℕ → ℝ := fun n ↦ (1 / 2) ^ n
  have Bpos : ∀ n, 0 < B n
  intro n
  apply pow_pos; norm_num
  /- Translate the density assumption into two functions `center` and `radius` associating
    to any n, x, δ, δpos a center and a positive radius such that
    `closedBall center radius` is included both in `f n` and in `closedBall x δ`.
    We can also require `radius ≤ (1/2)^(n+1)`, to ensure we get a Cauchy sequence later. -/
  have :
    ∀ (n : ℕ) (x : X),
      ∀ δ > 0, ∃ y : X, ∃ r > 0, r ≤ B (n + 1) ∧ closedBall y r ⊆ closedBall x δ ∩ f n :=
    by intro n x δ dpos
       specialize hd n
       rw [dense_iff_closure_eq ] at hd
       have : x ∈ closure (f n) := by rw [hd]; trivial
       rcases Metric.mem_closure_iff.1 this (δ/2) (by norm_num [dpos]) with ⟨y, yin, hy⟩
       use y
       have yball : ∃ η > 0, ball y η ⊆ f n := isOpen_iff.1 (ho n) _ yin
       rcases yball with ⟨η, npos, hη⟩
       let m := min (B (n+1)) (min (δ/2) (η/2))
       use m, by apply lt_min; exact Bpos (n+1); apply lt_min; norm_num [dpos]; norm_num [npos]
       constructor
       apply min_le_left
       intro y' y'inb
       rw [mem_closedBall] at y'inb
       constructor
       rw [mem_closedBall, dist_comm, le_iff_eq_or_lt]
       apply Or.inr
       calc
        dist x y' ≤ dist x y + dist y y' := dist_triangle x y y'
        _ < δ/2 + m := by apply add_lt_add_of_lt_of_le; exact hy; rw [dist_comm]; exact y'inb
        _ ≤ δ := by apply le_trans; apply add_le_add_right (le_trans (min_le_right (B (n+1)) _) (min_le_left (δ/2) (η/2))); norm_num
       apply hη
       have : dist y' y < η := by apply lt_of_le_of_lt; exact y'inb; apply lt_of_le_of_lt (min_le_right _ _); apply lt_of_le_of_lt (min_le_right _ _); norm_num [npos]
       assumption
  choose! center radius Hpos HB Hball using this
  intro x
  rw [mem_closure_iff_nhds_basis nhds_basis_closedBall]
  intro ε εpos
  /- `ε` is positive. We have to find a point in the ball of radius `ε` around `x`
    belonging to all `f n`. For this, we construct inductively a sequence
    `F n = (c n, r n)` such that the closed ball `closedBall (c n) (r n)` is included
    in the previous ball and in `f n`, and such that `r n` is small enough to ensure
    that `c n` is a Cauchy sequence. Then `c n` converges to a limit which belongs
    to all the `f n`. -/
  let F : ℕ → X × ℝ := fun n ↦
    Nat.recOn n (Prod.mk x (min ε (B 0)))
      fun n p ↦ Prod.mk (center n p.1 p.2) (radius n p.1 p.2)
  let c : ℕ → X := fun n ↦ (F n).1
  let r : ℕ → ℝ := fun n ↦ (F n).2
  have rpos : ∀ n, 0 < r n := by
    intro n
    induction' n with n hn
    exact lt_min εpos (Bpos 0)
    exact Hpos n (c n) (r n) hn
  have rB : ∀ n, r n ≤ B n := by
    intro n
    rcases Nat.eq_zero_or_eq_succ_pred n with hn | hn
    rw [hn]
    exact min_le_right _ _
    rw [hn]
    exact HB (n-1) (c (n-1)) (r (n-1)) (rpos (n-1))

  have incl : ∀ n, closedBall (c (n + 1)) (r (n + 1)) ⊆ closedBall (c n) (r n) ∩ f n := by
    intro n
    exact Hball n (c n) (r n) (rpos n)

  have cdist : ∀ n, dist (c n) (c (n + 1)) ≤ B n := by
    intro n
    rw [dist_comm]
    have : dist (c (n+1)) (c n) ≤ r n := (incl n (mem_closedBall_self (x := c (n+1)) (by exact le_iff_lt_or_eq.mpr (Or.inl (rpos (n+1)))))).1
    apply le_trans this (rB n)
  have : CauchySeq c := cauchySeq_of_le_geometric_two' cdist
  -- as the sequence `c n` is Cauchy in a complete space, it converges to a limit `y`.
  rcases cauchySeq_tendsto_of_complete this with ⟨y, ylim⟩
  -- this point `y` will be the desired point. We will check that it belongs to all
  -- `f n` and to `ball x ε`.
  use y
  have I : ∀ n, ∀ m ≥ n, closedBall (c m) (r m) ⊆ closedBall (c n) (r n) := by
    intro n m mgen
    induction' m with m hm
    rw [ge_iff_le, Nat.le_zero_eq] at mgen
    rw [mgen]
    rcases Nat.eq_or_lt_of_le mgen with hg | hg
    rw [hg]
    replace hg := Nat.le_of_lt_succ hg
    specialize hm hg
    simp at incl
    apply Set.Subset.trans (incl m).1 hm

  have yball : ∀ n, y ∈ closedBall (c n) (r n) := by
    intro n
    have : ∀ m ≥ n, dist (c m) (c n) ≤ r n := by intro m mge; exact I n m mge (mem_closedBall_self (by exact le_iff_lt_or_eq.mpr (Or.inl (rpos m))))
    have := Tendsto.dist ylim (tendsto_const_nhds (x := c n))
    apply le_of_tendsto this
    simp
    use n
  constructor
  apply mem_iInter.2
  intro i
  exact (incl i (yball (i+1))).2
  apply Metric.closedBall_subset_closedBall (min_le_left ε (B 0))
  exact yball 0
