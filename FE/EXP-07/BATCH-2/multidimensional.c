#include <stdio.h>

int main() {
    // Declare a 2D array (multi-dimensional array)
    int rows = 3, cols = 3;
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Variables to store the row and column of the two elements
    int row1, col1, row2, col2;

    // Display the 2D array
    printf("The 2D array is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Input the positions of two elements to add
    printf("Enter the row and column of the first element (0 to 2): ");
    scanf("%d %d", &row1, &col1);

    printf("Enter the row and column of the second element (0 to 2): ");
    scanf("%d %d", &row2, &col2);

    // Check if the indices are valid
    if (row1 >= 0 && row1 < rows && col1 >= 0 && col1 < cols &&
        row2 >= 0 && row2 < rows && col2 >= 0 && col2 < cols) {
        // Calculate and display the sum of the two elements
        int sum = arr[row1][col1] + arr[row2][col2];
        printf("Sum of arr[%d][%d] and arr[%d][%d] is: %d\n", row1, col1, row2, col2, sum);
    } else {
        printf("Invalid indices!\n");
    }

    return 0;
}
