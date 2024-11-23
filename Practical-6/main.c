#include <stdio.h>

// Declaring the matmult function which computes matrix multiplication
void matmult(int rowsA, int colsA, int colsB, double matrixA[rowsA][colsA], double matrixB[colsA][colsB], double matrixC[rowsA][colsB]);

int main(void) {
    
    // Initializing variables and defining arrays
    int rowsA = 5, colsA = 3, colsB = 4;
    double matrixA[rowsA][colsA], matrixB[colsA][colsB], matrixC[rowsA][colsB];
    
    // Declaring loop variables
    int row, col, index;

    // Initializing matrixC to zero
    for (row = 0; row < rowsA; row++) {
        
	for (col = 0; col < colsB; col++)
            matrixC[row][col] = 0;
    }

    // Initializing matrixA with values based on row + col
    for (row = 0; row < rowsA; row++) {
        
	for (col = 0; col < colsA; col++)
            matrixA[row][col] = row + col;
    }

    // Initializing matrixB with values based on row - col
    for (row = 0; row < colsA; row++) {
        
	for (col = 0; col < colsB; col++)
            matrixB[row][col] = row - col;
    }

    // Calling matmult function from mm.c file
    matmult(rowsA, colsA, colsB, matrixA, matrixB, matrixC);

    // Printing matrixA
    printf("\nThe matrix A is: \n");
    for (row = 0; row < rowsA; row++) {

        for (col = 0; col < colsA; col++)
            
	printf("%3.0f", matrixA[row][col]);
        printf("\n");
    }    

    // Printing matrixB
    printf("\nThe matrix B is: \n");
    
    for (row = 0; row < colsA; row++) {
        
	for (col = 0; col < colsB; col++)
            printf("%3.0f", matrixB[row][col]);
        printf("\n");
    }

    // Printing matrixC
    printf("\nThe matrix C is: \n");
    for (row = 0; row < rowsA; row++) {
        for (col = 0; col < colsB; col++)
            printf("%3.0f", matrixC[row][col]);
        printf("\n");
    }

    return 0;
}

