#include "../src/matrix/matrix.h"
#include "adi-testing.h"
#include <stdio.h>
#include <stdlib.h>

int test_1() {
  TEST;
  matrix *m = zero_matrix(3, 3);
  assertEQ(m, NULL);
}

const int N_TEST = 1;
TESTS(test_1);

int main(void) {
  RUN_ALL;

  return 0;
}
