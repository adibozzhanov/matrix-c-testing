#include "matrix.h"
#include <stdlib.h>
#include<stdio.h>

MATRIX_ERROR M_ERROR = NO_ERROR;

// issue with memory allocation for more than 20 values
matrix *zero_matrix(int rows, int cols) {
    matrix* m = (matrix *) malloc(sizeof(matrix));
    
    // set the attributes of m those passed into the fn
    m->rows = rows;
    m->columns = cols;
    // and allocate memory for the array
    m->body = (int*)malloc(rows * cols * sizeof(int));

    for (int i = 0; i < rows*cols; i++) {
        m->body[i] = 0;
    }
    return m; 
}

// unsure
int free_matrix(matrix *m) { 
    free(m);
    return -1; 
}

// kinda works
void print_matrix(matrix *m) {
    for (int i = 0; i < m->rows; i++) {
        for (int j = 0; j < m->columns; j++) {
            int index = m->body[i * m->rows + m->columns];
            printf("%i", index);
        }
        printf("\n");
    }
}

int get_rows(matrix *m) { 
    return m->rows; 
}

int get_cols(matrix *m) { 
    return m->columns; 
}

int set(matrix *m, int row, int col, int val) { return -1; }

int get(matrix *m, int row, int col) { return -1; }

matrix *add(matrix *m, matrix *n) { return NULL; }

matrix *subtract(matrix *m, matrix *n) { return NULL; }

matrix *scale(matrix *m, int val) { return NULL; }

matrix *multiply(matrix *m, matrix *n) { return NULL; }

matrix *rotate(matrix *m) { return NULL; }

matrix *transpose(matrix *m) { return NULL; }
