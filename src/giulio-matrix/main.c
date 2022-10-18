#include "matrix.h"
#include <stdio.h>

int main(void) {
  matrix *m = zero_matrix(5, 5);

  printf("this print statement is from main.c\n");

  return 0;
}
