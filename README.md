# Formal Math Practice (Graduate Mathematics Formalization in Lean 4) [![Lean Action CI](https://github.com/ddkempiii/Formal-Math-Practice/actions/workflows/lean_action_ci.yml/badge.svg)](https://github.com/ddkempiii/Formal-Math-Practice/actions/workflows/lean_action_ci.yml)


A personal repository dedicated to exercises in formalizing graduate-level mathematics in **Lean 4** using **Mathlib**. The Lean Action CI badge above verifies that all code compiles.

It should be noted that the files primarily pull their problems from the [MIL online textbook](https://leanprover-community.github.io/mathematics_in_lean/index.html). Many, but certainly not all, of these problems contained most of the coding provided already. Solutions are indeed also provided in the associated repository. Notably, my own proofs deviate from the solutions in key places where I opted to avoid use of advanced tactics or core lemmas. This features in my proof of the Baire Category Theorem within GraduateMath/Topology/Metric_Spaces where `cauchySeq_of_le_geometric_two'` is proven without using `dist_le_range_sum_dist` nor `sum_geometric_two_le`. The extent of overlap between the files and the MIL solution templates/full proofs can be traced via access to the latter's repo which is freely provided in Ch.1 of the website. 

## Project Structure

- `GraduateMath/`
  - `Basic.lean` — Root configuration and core imports.
  - `Topology/` — Metric spaces, topological properties, and convergence.
  - `Algebra/` — Abstract algebra structures and proofs.
  - `Discrete_Mathematics/` — Combinatorics and discrete structures.
  - `NumberTheory/` — Analytic number theory investigations.

## Requirements

- Lean 4 (version managed via `lean-toolchain`)
- Mathlib 4

## Building the Project

To fetch dependencies, build the project, and personally verify all proofs:

```bash
lake exe cache get
lake build