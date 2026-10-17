# Formal Math Practice (Graduate Mathematics Formalization in Lean 4) [![Lean Action CI](https://github.com/ddkempiii/Formal-Math-Practice/actions/workflows/lean_action_ci.yml/badge.svg)](https://github.com/ddkempiii/Formal-Math-Practice/actions/workflows/lean_action_ci.yml)


A personal repository dedicated to exercises in formalizing graduate-level mathematics in **Lean 4** using **Mathlib**. The Lean Action CI badge above verifies that all code compiles correctly.

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