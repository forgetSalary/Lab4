#ifndef GRAPHMATRIX_MATRIX_H
#define GRAPHMATRIX_MATRIX_H

#endif //GRAPHMATRIX_MATRIX_H

#include "stdlib.h"
#include "../operations/matrix/remvrtx.h"

#define MATRIX_LOC(name,rows,cols,type) \
type** name = (type**)malloc(cols*sizeof(type*)); \
for(int i=0; i<cols; i++){\
    name[i] = (type*)malloc(rows*sizeof(type));\
}

#define MATRIX_FREE(matrix,cols) \
for(int i=0; i<cols; i++){\
    free(matrix[i]);\
}\
\
free(matrix);\


void define_matrx_poiners(int** m, int size);

int** matrix_create(int size);

void matrix_free(int** matrix,int size);

void init_random_symetric_matrix(int** matrix, int size, float chance);

void init_empty_matrix(int** matrix, int size);
