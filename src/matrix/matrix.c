#include "matrix.h"
#include <stdlib.h>

MATRIX_ERROR M_ERROR = NO_ERROR;

matrix *zero_matrix(int rows, int cols) {
  M_ERROR = ERROR;
  return NULL;
}

int free_matrix(matrix *m) {
  M_ERROR = ERROR;
  return -1;
}

void print_matrix(matrix *m) { M_ERROR = ERROR; }

int get_rows(matrix *m) {
  M_ERROR = ERROR;
  return -1;
}

int get_cols(matrix *m) {
  M_ERROR = ERROR;
  return -1;
}

int set(matrix *m, int row, int col, int val) {
  M_ERROR = ERROR;
  return -1;
}

int get(matrix *m, int row, int col) {
  M_ERROR = ERROR;
  return -1;
}

matrix *add(matrix *m, matrix *n) {
  M_ERROR = ERROR;
  return NULL;
}

matrix *subtract(matrix *m, matrix *n) {
  M_ERROR = ERROR;
  return NULL;
}

matrix *scale(matrix *m, int val) {
  M_ERROR = ERROR;
  return NULL;
}

matrix *multiply(matrix *m, matrix *n) {
  M_ERROR = ERROR;
  return NULL;
}

matrix *rotate(matrix *m) {
  M_ERROR = ERROR;
  return NULL;
}

matrix *transpose(matrix *m) {
  M_ERROR = ERROR;
  return NULL;
}
