#include <stdio.h>

#define MAX 10

// Function prototypes
void inputMatrix(int mat[MAX][MAX], int rows, int cols);
void printMatrix(int mat[MAX][MAX], int rows, int cols);
void addMatrices(int A[MAX][MAX], int B[MAX][MAX], int res[MAX][MAX], int r, int c);
void multiplyMatrices(int A[MAX][MAX], int B[MAX][MAX], int res[MAX][MAX], int r1, int c1, int r2, int c2);
void transposeMatrix(int mat[MAX][MAX], int res[MAX][MAX], int r, int c);

int main() {
    int A[MAX][MAX], B[MAX][MAX], result[MAX][MAX];
    int r1, c1, r2, c2, choice;

    printf("Matrix Operations using 2D Arrays\n");
    printf("1. Addition\n2. Multiplication\n3. Transpose\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter rows and columns for the matrices: ");
            scanf("%d %d", &r1, &c1);

            printf("Enter elements of Matrix A:\n");
            inputMatrix(A, r1, c1);
            printf("Enter elements of Matrix B:\n");
            inputMatrix(B, r1, c1);

            addMatrices(A, B, result, r1, c1);
            printf("\nResult of Addition:\n");
            printMatrix(result, r1, c1);
            break;

        case 2:
            printf("Enter rows and columns for Matrix A: ");
            scanf("%d %d", &r1, &c1);
            printf("Enter rows and columns for Matrix B: ");
            scanf("%d %d", &r2, &c2);

            if (c1 != r2) {
                printf("Error! Columns of Matrix A must equal rows of Matrix B.\n");
                return 1;
            }

            printf("Enter elements of Matrix A:\n");
            inputMatrix(A, r1, c1);
            printf("Enter elements of Matrix B:\n");
            inputMatrix(B, r2, c2);

            multiplyMatrices(A, B, result, r1, c1, r2, c2);
            printf("\nResult of Multiplication:\n");
            printMatrix(result, r1, c2);
            break;

        case 3:
            printf("Enter rows and columns for the matrix: ");
            scanf("%d %d", &r1, &c1);

            printf("Enter elements of the Matrix:\n");
            inputMatrix(A, r1, c1);

            transposeMatrix(A, result, r1, c1);
            printf("\nTranspose of the Matrix:\n");
            printMatrix(result, c1, r1);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

// Function to read matrix elements
void inputMatrix(int mat[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

// Function to display a matrix
void printMatrix(int mat[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

// Function to add two matrices
void addMatrices(int A[MAX][MAX], int B[MAX][MAX], int res[MAX][MAX], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            res[i][j] = A[i][j] + B[i][j];
        }
    }
}

// Function to multiply two matrices
void multiplyMatrices(int A[MAX][MAX], int B[MAX][MAX], int res[MAX][MAX], int r1, int c1, int r2, int c2) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            res[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                res[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// Function to find the transpose of a matrix
void transposeMatrix(int mat[MAX][MAX], int res[MAX][MAX], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            res[j][i] = mat[i][j];
        }
    }
}
