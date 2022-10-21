#include "matrix.h"
#include <stdio.h>
#include <stdlib.h>

MATRIX_ERROR M_ERRROR = NO_ERROR;

matrix *zero_matrix(int rows, int cols) {
  printf("this print statement is from matrix.c\n");

  matrix *m = (matrix *)malloc(sizeof(matrix));
  if (rows <= 0 || cols <= 0) {
    return NULL;
  }
  m->rows = rows;
  m->columns = cols;
  m->body = malloc((m->rows * m->columns) * sizeof(int));
  for (int i = 0; i < m->rows * m->columns; i++) {
    m->body[i] = 0;  
  }
  return m;

}

int free_matrix(matrix *m) {
  free(m);
  return 0; 
  } 

void print_matrix(matrix *m) {
  for (int i = 0; i < m->rows; i++) {
      for (int j = 0; j < m->columns; j++)
          printf("%d ", m->body[i * m->columns + j]);
      printf("\n");
  }
}

int get_rows(matrix *m) {
  if (M_ERRROR) {
    return m->rows;
  }
  return -1;

}

int get_cols(matrix *m) {
  if (M_ERRROR) {
    return m->columns; 
  }
  return -1;
}

int set(matrix *m, int row, int col, int val) {
  if (M_ERRROR) {
    return -1;
  }
  m->body[row * row + col] = val;
  return 0; 
}

int get(matrix *m, int row, int col) { return -1; }

matrix *add(matrix *m, matrix *n) { return NULL; }

matrix *subtract(matrix *m, matrix *n) { return NULL; }

matrix *scale(matrix *m, int val) { return NULL; }

matrix *multiply(matrix *m, matrix *n) { return NULL; }

matrix *rotate(matrix *m) { return NULL; }

matrix *transpose(matrix *m) { return NULL; }
