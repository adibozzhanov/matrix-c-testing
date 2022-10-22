#include "../src/matrix/matrix.h"
#include "adi-testing.h"
#include <stdio.h>
#include <stdlib.h>

test zero_matrix_zeroes() {
  matrix *m = zero_matrix(0, 0);
  assertEQ(m, NULL);
}

test zero_matrix_negative_rows() {
  matrix *m = zero_matrix(-1, 6);
  assertEQ(m, NULL);
}

test zero_matrix_negative_columns() {
  matrix *m = zero_matrix(5, -1);
  assertEQ(m, NULL);
}

test zero_matrix_3_2_rows() {
  matrix *m = safe_run(zero_matrix(3, 2));
  assertEQ(m->rows, 3);
}

test zero_matrix_3_2_columns() {
  matrix *m = safe_run(zero_matrix(3, 2));
  assertEQ(m->columns, 2);
}

test get_rows_null_matrix() {
  matrix *m = NULL;
  int x = get_rows(m);
  assertEQ(x, -1);
}

test get_rows_3_2_matrix() {
  matrix *m = safe_run(zero_matrix(3, 2));
  int x = safe_run(get_rows(m));
  assertEQ(x, 3);
}

test get_cols_3_2_matrix() {
  matrix *m = safe_run(zero_matrix(3, 2));
  int x = safe_run(get_cols(m));
  assertEQ(x, 2);
}

test get_cols_null_matrix() {
  matrix *m = NULL;
  int x = get_cols(m);
  assertEQ(x, -1);
}

test set_row_out_of_bounds() {
  matrix *m = safe_run(zero_matrix(3, 2));
  int x = set(m, 4, 1, 12);
  assertEQ(x, -1);
}

test set_col_out_of_bounds() {
  matrix *m = safe_run(zero_matrix(3, 2));
  int x = set(m, 1, 2, 12);
  assertEQ(x, -1);
}

test set_negative_col() {
  matrix *m = safe_run(zero_matrix(3, 2));
  int x = set(m, 1, -4, 12);
  assertEQ(x, -1);
}

test set_negative_row() {
  matrix *m = safe_run(zero_matrix(3, 2));
  int x = set(m, -1, 1, 12);
  assertEQ(x, -1);
}

test set_1_1_to_12() {
  matrix *m = safe_run(zero_matrix(3, 2));
  int x = safe_run(set(m, 1, 1, 12));
  assertEQ(m->body[3], 12);
}

test get_row_out_of_bounds() {
  matrix *m = safe_run(zero_matrix(3, 2));
  int x = get(m, 4, 1);
  assertEQ(x, -1);
}

test get_col_out_of_bounds() {
  matrix *m = safe_run(zero_matrix(3, 2));
  int x = get(m, 1, 2);
  assertEQ(x, -1);
}

test get_negative_col() {
  matrix *m = safe_run(zero_matrix(3, 2));
  int x = get(m, 1, -4);
  assertEQ(x, -1);
}

test get_negative_row() {
  matrix *m = safe_run(zero_matrix(3, 2));
  int x = get(m, -1, 1);
  assertEQ(x, -1);
}

test get_after_set_1_1_12() {
  matrix *m = safe_run(zero_matrix(3, 2));
  int result = safe_run(set(m, 1, 1, 12));
  int x = safe_run(get(m, 1, 1));
  assertEQ(x, 12);
}

// add all tests that you want to run right here
TESTS(zero_matrix_zeroes, zero_matrix_negative_rows,
      zero_matrix_negative_columns, zero_matrix_3_2_rows,
      zero_matrix_3_2_columns,

      get_rows_null_matrix, get_rows_3_2_matrix,

      get_cols_null_matrix, get_cols_3_2_matrix,

      set_row_out_of_bounds, set_col_out_of_bounds, set_negative_col,
      set_negative_row, set_1_1_to_12,

      get_col_out_of_bounds, get_row_out_of_bounds, get_negative_col,
      get_negative_row, get_after_set_1_1_12);

// don't touch this
int main(void) {
  RUN_ALL;

  return 0;
}
