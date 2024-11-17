#include <stdio.h>

int main() {
    int rows = 3, cols = 3;
    int matrix[3][3];

    // Input elements
    printf("Enter elements for a 3x3 matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element for [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Display matrix
    printf("\nThe matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
// Transpose of matrix
    printf("\nTranspose of the matrix is:\n");
    for (int j = 0; j < rows; j++) {
        for (int i = 0; i < cols; i++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
