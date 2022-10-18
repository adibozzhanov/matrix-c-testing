#include "matrix.h"
#include <stdlib.h>
#include <stdio.h>

MATRIX_ERROR M_ERROR = NO_ERROR;

matrix *zero_matrix(int rows, int cols) { 
    if(rows <= 0 || cols <= 0){
        M_ERROR = ERROR;
        return NULL;
    }
    matrix *m = (matrix *) malloc(sizeof(matrix));
    m->rows = rows;
    m->columns = cols;
    int* b = (int *) malloc(sizeof(int)*rows*cols);
    for (int i = 0; i < rows*cols; i++){
        b[i] = 0;
    }
    m->body = b;
    return m; 
    }

int free_matrix(matrix *m) { 


    return -1; 
}

void print_matrix(matrix *m) {
    int rows = m->rows;
    int cols = m->columns;
    int* b = m->body;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d",b[i*rows+j]);
            if(j != cols-1){
                printf(",");
            }
        }
        printf("\n");
    }
}

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
