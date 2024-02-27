#include "arithmetic/multiplication.hpp"

namespace geometry {

struct Square {
  int side_length;

  int perimeter() {
    return arithmetic::multiply(this->side_length, 4);
  }

  int area();
};

}
