#include "../src/matrix/matrix.h"
#include "adi-testing.h"
#include <stdio.h>
#include <stdlib.h>



test test_1() {
  // use this template to create tests

  assertEQ(1,1);
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
TESTS(test_1,
      test_2,
      test_3
      );

// don't touch this
int main(void) {
  RUN_ALL;

  return 0;
}
