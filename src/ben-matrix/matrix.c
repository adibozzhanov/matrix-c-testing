#include "matrix.h"
#include <stdlib.h>
#include<stdio.h>

MATRIX_ERROR M_ERROR = NO_ERROR;

// also unsure
matrix *zero_matrix(int rows, int cols) {
    int* body = (int *) malloc(rows * cols * sizeof(int));
    matrix* zero_matrix = (matrix *) malloc(sizeof(matrix));
    
    int body[rows][cols];
    for (int i = 0; i < rows*cols; i++) {
        body[i] = 0;
    }
    return NULL; 
}

// unsure
int free_matrix(matrix *m) { 
    int* arr = m->body;
    int* r = m->rows;
    int* c = m->columns;
    free(c);
    free(r);
    free(arr);
    free(m);
    return -1; 
}

// unsure
void print_matrix(matrix *m) {
    int* r = m->rows;
    int* c = m->columns;
    int* arr = m->body;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            //printf("%i", arr[i][j]);
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
