#include "math.h"
#include <cstdio>

int main(void) {
  int a = 2;
  int b = 4;
  int c = math::add(a, b);
  std::printf("%i+%i=%i\n", a, b, c);
}
