#include <stdio.h>

void printHourglass(int n) {
    // Print the upper part of the hourglass
    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        // Print stars
        for (int j = 0; j < (2 * (n - i) - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    
    // Print the lower part of the hourglass
    for (int i = 1; i < n; i++) {
        // Print leading spaces
        for (int j = 0; j < (n - i - 1); j++) {
            printf(" ");
        }
        // Print stars
        for (int j = 0; j < (2 * i + 1); j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int rows;
    printf("Enter the number of rows for the hourglass: ");
    scanf("%d", &rows);
    
    printHourglass(rows);
    
    return 0;
}
