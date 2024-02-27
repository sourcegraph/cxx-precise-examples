# C++ precise examples

This repository contains some minimal examples
of configuring precise code intel for C++.
Each example is in a separate directory.

- `piecewise_monorepo`: This example has two CMake sub-projects,
  one under `arithmetic` and another under `geometry/square`.
  `geometry/square`. However, despite the code living in the same
  repository, we use a `package-map.json` file to allow independently
  indexing different sub-directories while supporting code navigation
  between different sub-directories correctly.

  ```
  # Make sure scip-clang, make, cmake and Ninja are on PATH
  PATH="/path/to/dir-with-scip-clang-binary:$PATH" make indexes
  ```

  The snapshot output is committed under `out/` directories
  in `arithmetic/` and `geometry/square` respectively.

  The key point to notice is that the symbol names such as
  ```
  ^^^^^^^^ definition cxx . cxx-minimal-arithmetic v0$ arithmetic/multiply(9b79fb6aee4c0440).
  ^^^^^^^^ reference  cxx . cxx-minimal-arithmetic v0$ arithmetic/multiply(9b79fb6aee4c0440).
  ```
  Match up exactly across packages, with the same exact package
  information.

  For more details, see the `Makefile` in that folder.

For questions/issues with this repo, file an issue on the
sourcegraph/sourcegraph repo (or the sourcegraph/customer repo
for customer questions) and add the `team/graph` label.
