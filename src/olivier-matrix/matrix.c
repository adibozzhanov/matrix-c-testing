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
    if(m == NULL){
        M_ERROR = ERROR;
        return -1;
    }
    free(m->body);
    free(m);
    return 0;
}

void print_matrix(matrix *m) {
    for(int i=0;i<m->rows;i++){
        for(int j=0;j<m->columns;j++){
            printf("%d",m->body[i*m->rows+j]);
            if(j != m->columns-1){
                printf(",");
            }
        }
        printf("\n");
    }
}

int get_rows(matrix *m) { 
    if(m == NULL){
        M_ERROR = ERROR;
        return -1; 
    }
    return m->rows;
}

int get_cols(matrix *m) { 
    if(m == NULL){
        M_ERROR = ERROR;
        return -1; 
    }
    return m->columns; 
}

int set(matrix *m, int row, int col, int val) { 
    if(m == NULL || row < 0 || col < 0 || m->rows < row || m->columns < col){
        M_ERROR = ERROR;
        return -1; 
    } 
    m->body[row*m->rows+col] = val;
    return 0;
}

int get(matrix *m, int row, int col) { 
    if(m == NULL || row < 0 || col < 0 || m->rows < row || m->columns < col){
        M_ERROR = ERROR;
        return -1; 
    }
    return m->body[row*m->rows+col];
}

matrix *add(matrix *m, matrix *n) { return NULL; }

matrix *subtract(matrix *m, matrix *n) { return NULL; }

matrix *scale(matrix *m, int val) { return NULL; }

matrix *multiply(matrix *m, matrix *n) { return NULL; }

matrix *rotate(matrix *m) { return NULL; }

matrix *transpose(matrix *m) { return NULL; }
