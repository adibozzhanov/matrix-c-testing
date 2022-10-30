#include "../src/matrix/matrix.h"
#include "adi-testing.h"
#include <stdio.h>
#include <stdlib.h>

test test_zero_matrix_create()
{
    assertEQ(1, 1);
}

test test_zero_matrix_initialised_zeroes()
{
    assertEQ(0, 1);
}

// add all tests that you want to run right here
TESTS(test_zero_matrix_create, test_zero_matrix_initialised_zeroes);

// don't touch this
int main(void) {
  RUN_ALL;

  return 0;
}
