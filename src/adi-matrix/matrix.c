#include "matrix.h"
#include <stdio.h>
#include <stdlib.h>

MATRIX_ERROR M_ERROR = 0;

matrix *zero_matrix(int rows, int cols) {

  if (rows <= 0 || cols <= 0) {
    M_ERROR = 1;
    return NULL;
  }

  matrix *m = (matrix *)malloc(sizeof(matrix));
  int *body = (int *)malloc(rows * cols * sizeof(int));

  for (int i = 0; i < rows * cols; i++) {
    body[i] = 0;
  }

  m->rows = rows;
  m->columns = cols;
  m->body = body;

  return m;
}

int free_matrix(matrix *m) {
  // safety check
  if (m != NULL) {
    free(m->body);
    free(m);
    return 0;
  }
  M_ERROR = 1;
  return -1;
}

void print_matrix(matrix *m) {
  if (m == NULL) {
    return;
  }

  for (int row = 0; row < get_rows(m); row++) {
    for (int col = 0; col < get_cols(m); col++) {
      printf("%i ", get(m, row, col));
    }
    printf("\n");
  }
}

int get_rows(matrix *m) {
  if (m == NULL) {
    M_ERROR = 1;
    return -1;
  }
  return m->rows;
}

int get_cols(matrix *m) {
  if (m == NULL) {
    M_ERROR = 1;
    return -1;
  }
  return m->columns;
}

int set(matrix *m, int row, int col, int val) {

  if (row >= get_rows(m) || col >= get_cols(m) || row < 0 || col < 0 ||
      m == NULL) {
    M_ERROR = 1;
    return -1;
  }
  m->body[row * get_cols(m) + col] = val;
  return 0;
}

int get(matrix *m, int row, int col) {

  if (row >= get_rows(m) || col >= get_cols(m) || row < 0 || col < 0 ||
      m == NULL) {
    M_ERROR = 1;
    return -1;
  }

  return m->body[row * get_cols(m) + col];
}

matrix *add(matrix *m, matrix *n) { return NULL; }

matrix *subtract(matrix *m, matrix *n) { return NULL; }

matrix *scale(matrix *m, int val) { return NULL; }

matrix *multiply(matrix *m, matrix *n) { return NULL; }

matrix *rotate(matrix *m) { return NULL; }

matrix *transpose(matrix *m) { return NULL; }
