import GraduateMath.Basic

/-! We study lattices in this file, proving commutativity and associativity
the meet and join operations as well as the absorption laws and equivalence
of the distributive laws.-/

section
variable {α : Type*} [Lattice α]
variable (x y z a b c: α)

example : x ⊓ y = y ⊓ x := by
  apply le_antisymm
  repeat
    exact le_inf inf_le_right inf_le_left

example : x ⊓ y ⊓ z = x ⊓ (y ⊓ z) := by
  have h : ∀ x y z : α, x ⊓ y ⊓ z ≤ y ⊓ z ⊓ x := by
    intro x y z
    apply le_inf
    apply le_inf
    calc
      x ⊓ y ⊓ z ≤ x ⊓ y := by exact inf_le_left
      _ ≤ y := by exact inf_le_right
    exact inf_le_right
    exact le_trans inf_le_left inf_le_left
  rw [inf_comm x (y ⊓ z)]
  apply le_antisymm
  apply h
  exact le_trans (h y z x) (h z x y)



example : x ⊔ y = y ⊔ x := by
  apply le_antisymm
  repeat
    exact sup_le le_sup_right le_sup_left

example : x ⊔ y ⊔ z = x ⊔ (y ⊔ z) := by
  rw [sup_comm x (y ⊔ z)]
  have h : ∀ x y z : α, x ⊔ y ⊔ z ≤ y ⊔ z ⊔ x := by
    intro x y z
    apply sup_le
    apply sup_le
    apply le_sup_right
    exact le_trans le_sup_left le_sup_left
    exact le_trans le_sup_right le_sup_left
  apply le_antisymm
  apply h
  exact le_trans (h y z x) (h z x y)

theorem absorb1 : x ⊓ (x ⊔ y) = x := by
  apply le_antisymm
  apply inf_le_left
  apply le_inf
  rfl
  exact le_sup_left

theorem absorb2 : x ⊔ x ⊓ y = x := by
  apply le_antisymm
  apply sup_le
  rfl
  exact inf_le_left
  exact le_sup_left

example (h : ∀ x y z : α, x ⊓ (y ⊔ z) = x ⊓ y ⊔ x ⊓ z) : a ⊔ b ⊓ c = (a ⊔ b) ⊓ (a ⊔ c) := by
  rw [h (a⊔ b) a c, inf_comm (a⊔b), inf_sup_self, inf_comm (a⊔b), h, ← sup_assoc, inf_comm c a]
  rw [sup_inf_self, inf_comm]


example (h : ∀ x y z : α, x ⊔ y ⊓ z = (x ⊔ y) ⊓ (x ⊔ z)) : a ⊓ (b ⊔ c) = a ⊓ b ⊔ a ⊓ c := by
  rw [h, sup_comm (a⊓b), sup_inf_self, sup_comm (a⊓b), h, ← inf_assoc, sup_comm c, inf_sup_self, sup_comm]

end
