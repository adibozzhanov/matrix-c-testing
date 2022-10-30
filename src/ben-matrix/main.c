#include "matrix.h"
#include <stdio.h>

int main(void) {
  matrix *m = zero_matrix(7, 12);
  print_matrix(m);
  set(m, 0, 0, 1);
  set(m, 6, 11, 2);
  print_matrix(m);
  printf("program works\n");

  return 0;
}
