#include "matrix.h"
#include <stdio.h>
#include <stdlib.h>

matrix *zero_matrix(int rows, int cols) {
  printf("this print statement is from matrix.c\n");
  
  return NULL;
}

int free_matrix(matrix *m) { return -1; }

void print_matrix(matrix *m) {}

int get_rows(matrix *m) { return -1; }

int get_cols(matrix *m) { return -1; }

int set(matrix *m, int row, int col, int val) { return -1; }

int get(matrix *m, int row, int col) { return -1; }

matrix *add(matrix *m, matrix *n) { return NULL; }

matrix *subtract(matrix *m, matrix *n) { return NULL; }

matrix *scale(matrix *m, int val) { return NULL; }

matrix *multiply(matrix *m, matrix *n) { return NULL; }

matrix *rotate(matrix *m) { return NULL; }

matrix *transpose(matrix *m) { return NULL; }
