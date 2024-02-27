  #include "arithmetic/multiplication.hpp"
//^ definition cxx . cxx-minimal-arithmetic v0$ `<file>/src/multiplication.cpp`/
//documentation
//> File: src/multiplication.cpp
//         ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ reference cxx . cxx-minimal-arithmetic v0$ `<file>/include/arithmetic/multiplication.hpp`/
  
  int arithmetic::multiply3(int a, int b, int c) {
//    ^^^^^^^^^^ reference cxx . cxx-minimal-arithmetic v0$ arithmetic/
//                ^^^^^^^^^ definition cxx . cxx-minimal-arithmetic v0$ arithmetic/multiply3(2326284602b0bb2d).
//                documentation
//                > No documentation available.
//                              ^ definition local 0
//                                     ^ definition local 1
//                                            ^ definition local 2
      return arithmetic::multiply(c, arithmetic::multiply(b, a));
//           ^^^^^^^^^^ reference cxx . cxx-minimal-arithmetic v0$ arithmetic/
//                       ^^^^^^^^ reference cxx . cxx-minimal-arithmetic v0$ arithmetic/multiply(9b79fb6aee4c0440).
//                                ^ reference local 2
//                                   ^^^^^^^^^^ reference cxx . cxx-minimal-arithmetic v0$ arithmetic/
//                                               ^^^^^^^^ reference cxx . cxx-minimal-arithmetic v0$ arithmetic/multiply(9b79fb6aee4c0440).
//                                                        ^ reference local 1
//                                                           ^ reference local 0
  }
