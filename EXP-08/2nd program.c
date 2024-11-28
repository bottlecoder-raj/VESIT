//Create a structure to store information about a book (title, author, price) and write a program to display this information.

#include <stdio.h>
#define NUM_TITLE 2

// Define the structure for a student
struct Bookinfo {
    char title[100];
    char author[100];
    float price;
};

int main() {
    struct Bookinfo Bookinfo[NUM_TITLE];  // Array of 100 students

    // Input student details
    printf("Enter details of %d Book:\n", NUM_TITLE);
    for (int i = 0; i < NUM_TITLE; i++) {
        printf("\nEnter details for Book %d\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]%*c", Bookinfo[i].title);  // Read a line of text including spaces
        printf("Author: ");
        scanf(" %[^\n]%*c", Bookinfo[i].author);
        printf("Price: ");
        scanf("%f", &Bookinfo[i].price);
    }

    // Display student details
    printf("\nDisplaying details of %d Book:\n", NUM_TITLE);
    for (int i = 0; i < NUM_TITLE; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", Bookinfo[i].title);
        printf("Author: %s\n", Bookinfo[i].author);
        printf("Price: %.2f\n", Bookinfo[i].price);
    }

    return 0;
} 
