#include <stdio.h>

int main() {
    float marks; // Variable to store the marks
    char grade;  // Variable to store the grade

    // Prompt the user for their marks
    printf("Enter your marks (0-100): ");
    scanf("%f", &marks);

    // Determine the grade based on the marks
    if (marks < 0 || marks > 100) {
        printf("Invalid marks! Please enter a value between 0 and 100.\n");
    } else if (marks >= 90) {
        grade = 'A'; // Grade A for marks 90 and above
    } else if (marks >= 80) {
        grade = 'B'; // Grade B for marks between 80 and 89
    } else if (marks >= 70) {
        grade = 'C'; // Grade C for marks between 70 and 79
    } else if (marks >= 60) {
        grade = 'D'; // Grade D for marks between 60 and 69
    } else {
        grade = 'F'; // Grade F for marks below 60
    }

    // Print the result
    if (marks >= 0 && marks <= 100) {
        printf("Your grade is: %c\n", grade);
    }

    return 0;
}
