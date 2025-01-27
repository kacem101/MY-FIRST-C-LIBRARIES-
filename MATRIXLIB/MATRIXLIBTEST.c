#include"MATRIXLIB.h"
#include<stdio.h>
#include<stdbool.h>
int main(){
    int choice=20;
    int rows, cols, size, scalar, power;
    int matrix1[100][100], matrix2[100][100], result[100][100];

  
    while (1) {
        printf("\nMatrix Operations Menu\n");
        printf("1. Initialize Matrix\n");
        printf("2. Input Matrix\n");
        printf("3. Display Matrix\n");
        printf("4. Add Matrices\n");
        printf("5. Subtract Matrices\n");
        printf("6. Multiply Matrices\n");
        printf("7. Scalar Multiplication\n");
        printf("8. Check if Square Matrix\n");
        printf("9. Check if Identity Matrix\n");
        printf("10. Check if Diagonal Matrix\n");
        printf("11. Check if Symmetric Matrix\n");
        printf("12. Check if Upper Triangular Matrix\n");
        printf("13. Transpose Matrix\n");
        printf("14. Calculate Determinant\n");
        printf("15. Calculate Trace\n");
        printf("16. Rotate Matrix 90 degrees\n");
        printf("17. Matrix Power\n");
        printf("18. Create Identity Matrix\n");
        printf("19. Copy Matrix\n");
        printf("20. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter number of rows: ");
                scanf("%d", &rows);
                printf("Enter number of columns: ");
                scanf("%d", &cols);
                printf("Enter value to initialize the matrix: ");
                int value;
                scanf("%d", &value);
                initializeMatrix(rows, cols, matrix1, value);
                printf("Matrix initialized.\n");
                break;

            case 2:
                printf("Enter number of rows: ");
                scanf("%d", &rows);
                printf("Enter number of columns: ");
                scanf("%d", &cols);
                printf("Input the elements of the matrix:\n");
                inputMatrix(rows, cols, matrix1);
                break;

            case 3:
                printMatrix(rows, cols, matrix1);
                break;

            case 4:
                // Add Matrices - Input both matrices
                printf("Enter number of rows for matrix1: ");
                scanf("%d", &rows);
                printf("Enter number of columns for matrix1: ");
                scanf("%d", &cols);
                printf("Input the elements of matrix1:\n");
                inputMatrix(rows, cols, matrix1);

                printf("Enter number of rows for matrix2: ");
                scanf("%d", &rows);
                printf("Enter number of columns for matrix2: ");
                scanf("%d", &cols);
                printf("Input the elements of matrix2:\n");
                inputMatrix(rows, cols, matrix2);

                addMatrix(rows, cols, matrix1, matrix2, result);
                printf("Result of Addition:\n");
                printMatrix(rows, cols, result);
                break;

            case 5:
                // Subtract Matrices - Input both matrices
                printf("Enter number of rows for matrix1: ");
                scanf("%d", &rows);
                printf("Enter number of columns for matrix1: ");
                scanf("%d", &cols);
                printf("Input the elements of matrix1:\n");
                inputMatrix(rows, cols, matrix1);

                printf("Enter number of rows for matrix2: ");
                scanf("%d", &rows);
                printf("Enter number of columns for matrix2: ");
                scanf("%d", &cols);
                printf("Input the elements of matrix2:\n");
                inputMatrix(rows, cols, matrix2);

                subtractMatrix(rows, cols, matrix1, matrix2, result);
                printf("Result of Subtraction:\n");
                printMatrix(rows, cols, result);
                break;

            case 6:
                // Multiply Matrices - Input both matrices
                printf("Enter number of rows for matrix1: ");
                scanf("%d", &rows);
                printf("Enter number of columns for matrix1: ");
                scanf("%d", &cols);
                printf("Input the elements of matrix1:\n");
                inputMatrix(rows, cols, matrix1);

                printf("Enter number of rows for matrix2: ");
                scanf("%d", &rows);
                printf("Enter number of columns for matrix2: ");
                scanf("%d", &cols);
                printf("Input the elements of matrix2:\n");
                inputMatrix(rows, cols, matrix2);

                multiplicateMatrix(rows, cols, matrix1, rows, cols, matrix2, result);
                printf("Result of Multiplication:\n");
                printMatrix(rows, cols, result);
                break;

            case 7:
                printf("Enter scalar value: ");
                scanf("%d", &scalar);
                ScalarMuliplicateMatrix(rows, cols, matrix1, scalar, result);
                printf("Result of Scalar Multiplication:\n");
                printMatrix(rows, cols, result);
                break;

            case 8:
                if (isSquareMatrix(rows, cols)) {
                    printf("The matrix is a square matrix.\n");
                } else {
                    printf("The matrix is not a square matrix.\n");
                }
                break;

            case 9:
                if (isIdentityMatrix(rows, matrix1)) {
                    printf("The matrix is an identity matrix.\n");
                } else {
                    printf("The matrix is not an identity matrix.\n");
                }
                break;

            case 10:
                if (isDiagonalMatrix(rows, matrix1)) {
                    printf("The matrix is a diagonal matrix.\n");
                } else {
                    printf("The matrix is not a diagonal matrix.\n");
                }
                break;

            case 11:
                if (isSymmetricMatrix(rows, matrix1)) {
                    printf("The matrix is symmetric.\n");
                } else {
                    printf("The matrix is not symmetric.\n");
                }
                break;

            case 12:
                if (isUpperTriangular(rows, matrix1)) {
                    printf("The matrix is upper triangular.\n");
                } else {
                    printf("The matrix is not upper triangular.\n");
                }
                break;

            case 13:
                transposeMatrix(rows, cols, matrix1, result);
                printf("Transposed Matrix:\n");
                printMatrix(cols, rows, result);
                break;

            case 14:
                printf("Determinant: %d\n", calculateDeterminant(rows, matrix1));
                break;

            case 15:
                printf("Trace: %d\n", traceMatrix(rows, matrix1));
                break;

            case 16:
                rotateMatrix90(rows, matrix1);
                printf("Matrix after 90 degree rotation:\n");
                printMatrix(rows, cols, matrix1);
                break;

            case 17:
                printf("Enter the power: ");
                scanf("%d", &power);
                matrixPower(rows, matrix1, power, result);
                printf("Matrix raised to the power %d:\n", power);
                printMatrix(rows, cols, result);
                break;

            case 18:
                createIdentity(rows, matrix1);
                printf("Identity Matrix:\n");
                printMatrix(rows, cols, matrix1);
                break;

            case 19:
                copyMatrix(rows, cols, matrix1, result);
                printf("Matrix copied:\n");
                printMatrix(rows, cols, result);
                break;

            case 20:
                printf("Exiting the program.\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}


