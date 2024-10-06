#include <stdio.h>

// Function to swap two numbers
void swap(int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
    // Display values after swapping
    printf("After swapping: a = %d, b = %d\n", x,y);

}

int main() {
    int a, b;

    // Input values for a and b
    printf("Enter value for a: ");
    scanf("%d", &a);
    
    printf("Enter value for b: ");
    scanf("%d", &b);

    // Display original values
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Call swap function
    swap(a, b);



    return 0;
}
