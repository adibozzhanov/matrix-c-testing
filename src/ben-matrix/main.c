#include "matrix.h"
#include <stdio.h>

int main(void) {
  matrix *m = zero_matrix(20, 10);
  print_matrix(m);

  printf("program works\n");

  return 0;
}
