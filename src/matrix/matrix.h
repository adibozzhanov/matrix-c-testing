typedef struct _matrix {
  int rows;
  int columns;
  int *body;
} matrix;

typedef enum m_error { NO_ERROR, ERROR } MATRIX_ERROR;

extern MATRIX_ERROR M_ERROR;

matrix *zero_matrix(int rows, int cols);
// Dynamically allocates the matrix, with a given number of rows and columns
// initialises all values to 0
// ARGS:
//   int rows: integer number of rows
//   int cols: integer number of columns
//
// If given 0 or negative number of either rows or columns,
// then return a NULL pointer and set the error flag
//
// Returns: Pointer to the created matrix or NULL if input is bad

int free_matrix(matrix *m);
// frees the memory allocated by the matrix
//
// set the error flag if something goes wrong
// return: 0 if successful and -1 if something went wrong

void print_matrix(matrix *m);
// prints out the matrix
// do it in whatever way you want... you don't have to test this one
// this is more like for convenience.

int get_rows(matrix *m);
// Returns the number of rows of the given matrix.
//
// ARGS:
//   matrix *m: Pointer to the matrix
//
// if given something that's not a matrix, then return -1 and set the error flag
//
// returns: integer value of number of rows

int get_cols(matrix *m);
// Returns the number of columns of the given matrix.
//
// ARGS:
//   matrix *m: Pointer to the matrix
//
// if given something that's not a matrix, then return -1 and set the error flag
//
// returns: integer value of number of columns or -1

int set(matrix *m, int row, int col, int val);
// Sets the value of the matrix[row][col] to val
//
// ARGS:
//   matrix *m: Pointer to the matrix
//   int row: row of the cell you want to set
//   int col: column of the cell you want to set
//   int val: value that you are setting
//
// faulty input -> set the error flag and return -1
//
// returns: 0 if successful and -1 if the input is faulty

int get(matrix *m, int row, int col);
// Gets the value at matrix[row][col]
//
// ARGS:
//   matrix *m: Pointer to the matrix
//   int row: row of the cell you want to get
//   int col: column of the cell you want to get
//
// returns: integer value that's stored in the matrix, if input is flawed,
//          then return -1 and set the error flag

matrix *add(matrix *m, matrix *n);
// Adds 2 matrices element-wise and stores the result m
//
// ARGS:
//   matrix *m: Pointer to the matrix
//   matrix *n: Pointer to the other matrix
//
// set the error flag in case anything goes wrong
//
// returns: *m, or NULL if anything is wrong

matrix *subtract(matrix *m, matrix *n);
// Subtracts 2 matrices element-wise and stores the result in m
//
// ARGS:
//   matrix *m: Pointer to the matrix
//   matrix *n: Pointer to the other matrix
//
// set the error flag in case anything goes wrong
//
// returns: *m, or NULL if anything is wrong

matrix *scale(matrix *m, int val);
// Subtracts 2 matrices element-wise and stores the result in the first matrix
//
// ARGS:p
//   matrix *m: Pointer to the matrix
//   matrix *n: Pointer to the other matrix
//
// set the error flag in case anything goes wrong
//
// returns: *m, or NULL if anything is wrong

matrix *multiply(matrix *m, matrix *n);
// Multiplies 2 matrices and stores the result in the first matrix
//
// ARGS:
//   matrix *m: Pointer to the matrix
//   matrix *n: Pointer to the other matrix
//
// set the error flag in case anything goes wrong
//
// returns: *m, or NULL if anything is wrong

matrix *rotate(matrix *m);
// Rotates matrix values 90 degrees clockwise
//
// ARGS:
//   matrix *m: Pointer to the matrix
//
// set the error flag in case anything goes wrong
// if current dimensions don't allow to do it straight away
// then free the body of the matrix and create a new one that
// will let this happen
//
// returns: *m, or NULL if anything is wrong

matrix *transpose(matrix *m);
// Transposes the matrix m
//
// ARGS:
//   matrix *m: Pointer to the matrix
//   matrix *n: Pointer to the other matrix
//
// set the error flag in case anything goes wrong
// if current dimensions don't allow to do it straight away
// then free the body of the matrix and create a new one that
// will let this happen
//
// returns: *m, or NULL if anything is wrong
