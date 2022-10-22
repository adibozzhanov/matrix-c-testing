#include "matrix.h"
#include <stdio.h>

int main(void) {
  matrix *m = zero_matrix(5, 5);
  set(m, 1,1, 3);
  set(m,3,2,4);
  set(m, 0,0, 8);
  print_matrix(m);

  return 0;
}
