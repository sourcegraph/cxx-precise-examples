  #include "square.hpp"
//^ definition cxx . cxx-minimal-geometry-square v0$ `<file>/src/square.cpp`/
//documentation File: src/square.cpp
//         ^^^^^^^^^^^^ reference cxx . cxx-minimal-geometry-square v0$ `<file>/src/square.hpp`/
  #include "arithmetic/multiplication.hpp"
//         ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ reference cxx . cxx-minimal-arithmetic v0$ `<file>/include/arithmetic/multiplication.hpp`/
  
  namespace geometry {
//          ^^^^^^^^ definition cxx . cxx-minimal-geometry-square v0$ geometry/
//          documentation namespace geometry
  
  int Square::area() {
//    ^^^^^^ reference cxx . cxx-minimal-geometry-square v0$ geometry/Square#
//            ^^^^ definition cxx . cxx-minimal-geometry-square v0$ geometry/Square#area(b126dc7c1de90089).
//            documentation No documentation available.
    return arithmetic::multiply(this->side_length, this->side_length);
//         ^^^^^^^^^^ reference cxx . cxx-minimal-arithmetic v0$ arithmetic/
//                     ^^^^^^^^ reference cxx . cxx-minimal-arithmetic v0$ arithmetic/multiply(9b79fb6aee4c0440).
//                                    ^^^^^^^^^^^ reference cxx . cxx-minimal-geometry-square v0$ geometry/Square#side_length.
//                                                       ^^^^^^^^^^^ reference cxx . cxx-minimal-geometry-square v0$ geometry/Square#side_length.
  }
  
  }
  
