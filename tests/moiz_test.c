#include "../src/matrix/matrix.h"
#include "adi-testing.h"
#include <stdio.h>
#include <stdlib.h>
#include "../src/olivier-matrix/matrix.c"


test test_zero_matrix_created() {
  // example of how a test fails
  matrix *m = zero_matrix(3,3);

  assertEQ(m->rows,3);
}

test test_zero_matrix_is_negative() {
  matrix *output = zero_matrix(-1,-2);
  assertEQ(output, NULL);
}

test test_zero_matrix_is_zero() {
  matrix *output = zero_matrix(0,0);
  assertEQ(output,NULL);
}

test test_2() {
  // example of how a test fails
  matrix* m =  zero_matrix(3, 3);

  assertEQ(1,0);
}
test test_3() {
  // example of how a test fails
  matrix* m =  zero_matrix(3, 3);

  assertEQ(1,0);
}



// add all tests that you want to run right here
TESTS(test_zero_matrix_created,
      test_zero_matrix_is_negative,
      test_zero_matrix_is_zero
      );

// don't touch this
int main(void) {
  RUN_ALL;

  return 0;
}
