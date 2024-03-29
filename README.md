# C++ precise examples

This repository contains some minimal examples
of configuring precise code intel for C++.

- [`piecewise_monorepo`](piecewise_monorepo): This example has two CMake sub-projects,
  one under [`arithmetic`](piecewise_monorepo/arithmetic) and another
  under [`geometry/square`](piecewise_monorepo/geometry/square).
  However, despite the code living in the same
  repository, we use a `package-map.json` file (generated by the
  [Makefile](piecewise_monorepo/Makefile)) to allow independently
  indexing different sub-directories while supporting code navigation
  between different sub-directories correctly.

  ```
  # Make sure scip-clang, make, cmake and Ninja are on PATH
  make indexes
  ```

  The snapshot output is committed under `out/` directories
  in `arithmetic/` and `geometry/square` respectively.

  ```
  # Make sure the above + scip CLI (https://github.com/sourcegraph/scip)
  # are on the PATH
  make snapshots
  ```

  The key point to notice is that the symbol names such as
  ```
  ^^^^^^^^ definition cxx . cxx-minimal-arithmetic v0$ arithmetic/multiply(9b79fb6aee4c0440).
  ^^^^^^^^ reference  cxx . cxx-minimal-arithmetic v0$ arithmetic/multiply(9b79fb6aee4c0440).
  ```
  Match up exactly across packages, with the same exact package
  information.

  For more details, such as how the `package-map.json` is generated,
  see the [Makefile](piecewise_monorepo/Makefile) in that folder.

  This approach can be used for indexing sub-parts of a large monorepo
  in parallel across a build fleet.

For questions/issues with this repo, file an issue on the
sourcegraph/sourcegraph repo (or the sourcegraph/customer repo
for customer questions) and add the `team/graph` label.
