#include "matrix.h"
#include <stdio.h>

int main(void) {
  matrix *m = zero_matrix(3, 5);
  print_matrix(m);
  printf("program works\n");

  return 0;
}