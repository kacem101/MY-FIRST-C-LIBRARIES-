#ifndef MATRIXLIB_H
#define MATRIXLIB_H
#include<stdio.h>
#include<stdbool.h>
__declspec(dllexport) void initializeMatrix(int rows, int cols, int matrix[rows][cols], int value);

__declspec(dllexport) void printMatrix(int rows, int cols, int matrix[rows][cols]);

__declspec(dllexport) void inputMatrix(int rows, int cols, int matrix[rows][cols]);

__declspec(dllexport) void addMatrix(int rows, int cols, int mat1[rows][cols], int mat2[rows][cols], int result[rows][cols]);

__declspec(dllexport) void subtractMatrix(int rows, int cols, int mat1[rows][cols], int mat2[rows][cols], int result[rows][cols]);

__declspec(dllexport) void multiplicateMatrix(int rows1, int cols1, int mat1[rows1][cols1], int rows2, int cols2, int mat2[rows2][cols2], int result[rows1][cols2]);

__declspec(dllexport) void ScalarMuliplicateMatrix(int rows, int cols, int mat[rows][cols], int scalar, int result[rows][cols]);

__declspec(dllexport) bool isSquareMatrix(int rows, int cols);

__declspec(dllexport) bool isIdentityMatrix(int size, int matrix[][100]);

__declspec(dllexport) bool isDiagonalMatrix(int size, int matrix[][100]);

__declspec(dllexport) bool isSymmetricMatrix(int size, int matrix[][100]);

__declspec(dllexport) bool isUpperTriangular(int size, int matrix[][100]);

__declspec(dllexport) void transposeMatrix(int rows, int cols, int mat[rows][cols], int result[cols][rows]);

__declspec(dllexport) int calculateDeterminant(int size, int matrix[size][size]);

__declspec(dllexport) int traceMatrix(int size, int matrix[size][size]);

__declspec(dllexport) void rotateMatrix90(int size, int matrix[size][size]);

__declspec(dllexport) void copyMatrix(int rows, int cols, int matrix[rows][cols], int dest[rows][cols]);

__declspec(dllexport) void createIdentity(int size, int matrix[size][size]);

__declspec(dllexport) void matrixPower(int size, int matrix[size][size], int power, int result[size][size]);

#endif
