#include<stdio.h>

#define MAX_SIZE 10

int main() {
    int row1, col1, row2, col2;

    // Input dimensions of the first matrix
    printf("Enter the dimensions of the first matrix (row col): ");
    scanf("%d %d", &row1, &col1);

    // Input dimensions of the second matrix
    printf("Enter the dimensions of the second matrix (row col): ");
    scanf("%d %d", &row2, &col2);

    // Check if the matrices can be multiplied
    if (col1 != row2) {
        printf("Matrices cannot be multiplied. Invalid dimensions.\n");
        return 1; // Return a non-zero value to indicate an error
    }

    // Declare matrices
    int matrix1[MAX_SIZE][MAX_SIZE], matrix2[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];

    // Input elements of the first matrix
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input elements of the second matrix
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Initialize result matrix to zero
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            result[i][j] = 0;
        }
    }

    // Multiply matrices
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            for (int k = 0; k < col1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Print the result matrix
    printf("Resultant Matrix (Multiplication):\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
