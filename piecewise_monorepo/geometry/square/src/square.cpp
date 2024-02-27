#include "square.hpp"
#include "arithmetic/multiplication.hpp"

namespace geometry {

int Square::area() {
  return arithmetic::multiply(this->side_length, this->side_length);
}

void test() {
  (void)arithmetic::multiply3(0, 0, 0);
}

}
