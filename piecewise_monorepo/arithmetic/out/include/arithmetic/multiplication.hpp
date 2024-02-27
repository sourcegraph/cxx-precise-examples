  #ifndef ARITHMETIC_MULTIPLICATION_HPP
//^ definition cxx . cxx-minimal-arithmetic v0$ `<file>/include/arithmetic/multiplication.hpp`/
//documentation
//> File: include/arithmetic/multiplication.hpp
  #define ARITHMETIC_MULTIPLICATION_HPP
//        ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ definition cxx . cxx-minimal-arithmetic v0$ `include/arithmetic/multiplication.hpp:2:9`!
//        documentation
//        > No documentation available.
  
  namespace arithmetic {
//          ^^^^^^^^^^ definition cxx . cxx-minimal-arithmetic v0$ arithmetic/
//          documentation
//          > namespace arithmetic
      inline int multiply(int a, int b) {
//               ^^^^^^^^ definition cxx . cxx-minimal-arithmetic v0$ arithmetic/multiply(9b79fb6aee4c0440).
//               documentation
//               > No documentation available.
//                            ^ definition local 0
//                                   ^ definition local 1
          return a * b;
//               ^ reference local 0
//                   ^ reference local 1
      }
  
      int multiply3(int a, int b, int c);
//        ^^^^^^^^^ reference cxx . cxx-minimal-arithmetic v0$ arithmetic/multiply3(2326284602b0bb2d).
//                      ^ definition local 2
//                             ^ definition local 3
//                                    ^ definition local 4
  }
  
  #endif
