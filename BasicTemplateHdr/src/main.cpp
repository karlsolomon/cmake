#include "math.h"
#include <cstdio>

int main(void) {
  int a = 2;
  int b = 3;
  int c = 0;
  c = math<int>::add(a, b);
  printf("%i+%i=%i\n", a, b, c);
}
