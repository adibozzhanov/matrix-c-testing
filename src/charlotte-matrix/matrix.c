#include "matrix.h"
#include <stdlib.h>
#include <stdio.h>

MATRIX_ERROR M_ERROR = NO_ERROR;

matrix *zero_matrix(int rows, int cols) {
    matrix *m = (matrix*)malloc(sizeof(matrix));
    if ((rows <= 0) || (cols <= 0)) {
        int *matrixArray = NULL;
        M_ERROR = ERROR;
    } else {
        m->rows = rows;
        m->columns = cols;
        m->body = (int *)malloc(rows * cols * sizeof(int));
        for (int i = 0; i < cols*rows; i++) {
            m->body[i] = 0;
        }
    }
    return m;
}

int free_matrix(matrix *m) {
    free(m); 
    return 0;
    //check for error????? 
}

void print_matrix(matrix *m) {
    for (int r = 0; r < m->rows; r++) {
        for (int c = 0; c < m->columns; c++) {
            //print elements in each row
            printf("%i", m->body[(r*m->rows) + c]);
            if (c < m->columns-1) {
                printf(" ");
            }
        }
        //go to next row
        printf("\n");
    }
}

int get_rows(matrix *m) {
    if (m != NULL) {
        return m->rows;
    } else {
        return -1;
    }
}
   

int get_cols(matrix *m) {
    if (m != NULL) {
        return m->columns;
    } else {
        return -1;
    }
}

int set(matrix *m, int row, int col, int val) { return -1; }

int get(matrix *m, int row, int col) { return -1; }

matrix *add(matrix *m, matrix *n) { return NULL; }

matrix *subtract(matrix *m, matrix *n) { return NULL; }

matrix *scale(matrix *m, int val) { return NULL; }

matrix *multiply(matrix *m, matrix *n) { return NULL; }

matrix *rotate(matrix *m) { return NULL; }

matrix *transpose(matrix *m) { return NULL; }
