  #include "arithmetic/multiplication.hpp"
//^ definition cxx . cxx-minimal-geometry-square v0$ `<file>/src/square.hpp`/
//documentation File: src/square.hpp
//         ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ reference cxx . cxx-minimal-arithmetic v0$ `<file>/include/arithmetic/multiplication.hpp`/
  
  namespace geometry {
//          ^^^^^^^^ definition cxx . cxx-minimal-geometry-square v0$ geometry/
//          documentation namespace geometry
  
  struct Square {
//       ^^^^^^ definition cxx . cxx-minimal-geometry-square v0$ geometry/Square#
//       documentation No documentation available.
    int side_length;
//      ^^^^^^^^^^^ definition cxx . cxx-minimal-geometry-square v0$ geometry/Square#side_length.
//      documentation No documentation available.
  
    int perimeter() {
//      ^^^^^^^^^ definition cxx . cxx-minimal-geometry-square v0$ geometry/Square#perimeter(b126dc7c1de90089).
//      documentation No documentation available.
      return arithmetic::multiply(this->side_length, 4);
//           ^^^^^^^^^^ reference cxx . cxx-minimal-arithmetic v0$ arithmetic/
//                       ^^^^^^^^ reference cxx . cxx-minimal-arithmetic v0$ arithmetic/multiply(9b79fb6aee4c0440).
//                                      ^^^^^^^^^^^ reference cxx . cxx-minimal-geometry-square v0$ geometry/Square#side_length.
    }
  
    int area();
//      ^^^^ reference cxx . cxx-minimal-geometry-square v0$ geometry/Square#area(b126dc7c1de90089).
  };
  
  }
  
