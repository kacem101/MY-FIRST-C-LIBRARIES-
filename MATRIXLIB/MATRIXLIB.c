#include"MATRIXLIB.h"
#include<stdio.h>
#include<stdbool.h>
// Function to initialize a matrix with a specific value
void initializeMatrix(int rows, int cols, int matrix[rows][cols], int value) {
    int i, j;
    // Loop through each element and assign the value
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            matrix[i][j] = value;
        }
    }
}

// Function to print the matrix
void printMatrix(int rows, int cols, int matrix[rows][cols]) {
    int i, j;
    printf("The elements of the matrix are:\n");
    // Loop through and print each element of the matrix
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf(" %d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to input the elements of a matrix
void inputMatrix(int rows, int cols, int matrix[rows][cols]) {
    int i, j;
    // Prompt user to enter each element of the matrix
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Please input the element for row %d, column %d: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to add two matrices and store the result in another matrix
void addMatrix(int rows, int cols, int mat1[rows][cols], int mat2[rows][cols], int result[rows][cols]) {
    int i, j;
    // Loop through and add corresponding elements from both matrices
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

// Function to subtract one matrix from another and store the result
void subtractMatrix(int rows, int cols, int mat1[rows][cols], int mat2[rows][cols], int result[rows][cols]) {
    int i, j;
    // Loop through and subtract corresponding elements from the matrices
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

// Function to multiply two matrices and store the result
void multiplicateMatrix(int rows1, int cols1, int mat1[rows1][cols1], int rows2, int cols2, int mat2[rows2][cols2], int result[rows1][cols2]) {
    int i, k, j;
    // Multiply matrices using the standard multiplication rule
    for (i = 0; i < rows1; ++i) {
        for (j = 0; j < cols2; ++j) {
            result[i][j] = 0;
            for (k = 0; k < cols1; ++k) {
                result[i][j] = result[i][j] + mat1[i][k] * mat2[k][j];
            }
        }
    }
}

// Function to perform scalar multiplication on a matrix
void ScalarMuliplicateMatrix(int rows, int cols, int mat[rows][cols], int scalar, int result[rows][cols]) {
    int i, j;
    // Multiply each element by the scalar value
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            result[i][j] = scalar * mat[i][j];
        }
    }
}

// Function to check if the matrix is square (rows == cols)
bool isSquareMatrix(int rows, int cols) {
    return (rows == cols);
}

// Function to check if the matrix is an identity matrix
bool isIdentityMatrix(int size, int matrix[][100]) {
    int i, j;
    bool v = true;
    // Loop through the matrix and check the conditions for identity matrix
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            if ((i == j && matrix[i][j] != 1) || (i != j && matrix[i][j] != 0)) {
                v = false;
            }
        }
    }
    return v;
}

// Function to check if the matrix is diagonal (only diagonal elements are non-zero)
bool isDiagonalMatrix(int size, int matrix[][100]) {
    int i, j;
    bool v = true;
    // Loop through the matrix and check for diagonal elements
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            if (i != j && matrix[i][j] != 0) {
                v = false;
            }
        }
    }
    return v;
}

// Function to check if the matrix is symmetric (matrix[i][j] == matrix[j][i])
bool isSymmetricMatrix(int size, int matrix[][100]) {
    int i, j;
    bool v = true;
    // Loop through the matrix and check symmetry condition
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            if (matrix[j][i] != matrix[i][j]) {
                v = false;
            }
        }
    }
    return v;
}

// Function to check if the matrix is upper triangular (all elements below the main diagonal are zero)
bool isUpperTriangular(int size, int matrix[][100]) {
    int i, j;
    bool v = true;
    // Loop through the matrix and check the upper triangular condition
    for (i = 0; i < size; i++) {
        for (j = 0; j < i; j++) {
            if (matrix[i][j] != 0) {
                v = false;
            }
        }
    }
    return v;
}

// Function to transpose a matrix (swap rows and columns)
void transposeMatrix(int rows, int cols, int mat[rows][cols], int result[cols][rows]) {
    int i, j;
    // Swap rows and columns for transposition
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            result[i][j] = mat[j][i];
        }
    }
}

// Function to calculate the determinant of a matrix (recursive)
int calculateDeterminant(int size, int matrix[size][size]) {
    if (size == 1) {
        return matrix[0][0];
    }
    int s = 0, m[size - 1][size - 1], i, mR, mC, row, col;
    // Loop to calculate the determinant recursively
    for (i = 0; i < size; i++) {
        mR = 0;
        for (row = 1; row < size; row++) {
            mC = 0;
            for (col = 0; col < size; col++) {
                if (col == i) {
                    continue;
                }
                m[mR][mC] = matrix[row][col];
                mC++;
            }
            mR++;
        }
        if (i % 2 == 0) {
            s = s + matrix[0][i] * calculateDeterminant(size - 1, m);
        } else {
            s = s - matrix[0][i] * calculateDeterminant(size - 1, m);
        }
    }
    return s;
}

// Function to calculate the trace of a square matrix (sum of diagonal elements)
int traceMatrix(int size, int matrix[size][size]) {
    int i, j, s = 0;
    // Loop to sum the diagonal elements
    for (i = 0; i < size; i++) {
        s = s + matrix[i][i];
    }
    return s;
}

// Function to rotate a matrix 90 degrees clockwise
void rotateMatrix90(int size, int matrix[size][size]) {
    int temp[size][size];
    int i, j;
    // Transpose the matrix first
    transposeMatrix(size, size, matrix, temp);
    // Reverse each row to complete 90-degree rotation
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            matrix[i][j] = temp[i][size - 1 - j];
        }
    }
}

// Function to copy a matrix to another matrix
void copyMatrix(int rows, int cols, int matrix[rows][cols], int dest[rows][cols]) {
    int i, j;
    // Loop through and copy elements
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            dest[i][j] = matrix[i][j];
        }
    }
}

// Function to create an identity matrix (1's on the diagonal and 0's elsewhere)
void createIdentity(int size, int matrix[size][size]) {
    int i, j;
    // Loop through and create identity matrix
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            if (i == j) {
                matrix[i][j] = 1;
            } else {
                matrix[i][j] = 0;
            }
        }
    }
}

// Function to raise a matrix to a power (matrix multiplication by itself repeatedly)
void matrixPower(int size, int matrix[size][size], int power, int result[size][size]) {
    int i, j;
    int temp[size][size];
    createIdentity(size, result); // Start with identity matrix
    // Multiply the matrix by itself power times
    for (i = 0; i < power; i++) {
        multiplicateMatrix(size, size, result, size, size, matrix, temp);
        copyMatrix(size, size, temp, result);
    }
}

  
