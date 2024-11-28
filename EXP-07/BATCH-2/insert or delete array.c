#include <stdio.h>

#define MAX_SIZE 100  // Maximum size of the array

void insertElement(int arr[], int *n, int element, int position) {
    if (*n >= MAX_SIZE) {
        printf("Array is full! Cannot insert element.\n");
        return;
    }

    // Shift elements to the right to make space for the new element
    for (int i = *n; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the element at the given position
    arr[position] = element;

    // Increase the size of the array
    (*n)++;
}

void deleteElement(int arr[], int *n, int position) {
    if (*n == 0) {
        printf("Array is empty! Cannot delete element.\n");
        return;
    }

    // Shift elements to the left to fill the gap left by the deleted element
    for (int i = position; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Decrease the size of the array
    (*n)--;
}

void displayArray(int arr[], int n) {
    if (n == 0) {
        printf("Array is empty.\n");
        return;
    }
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[MAX_SIZE];
    int n, choice, element, position;

    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display the initial array
    displayArray(arr, n);

    do {
        // Display menu
        printf("\nMenu:\n");
        printf("1. Insert Element\n");
        printf("2. Delete Element\n");
        printf("3. Display Array\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Insert an element
                printf("Enter the element to insert: ");
                scanf("%d", &element);
                printf("Enter the position to insert (0 to %d): ", n);
                scanf("%d", &position);
                
                if (position >= 0 && position <= n) {
                    insertElement(arr, &n, element, position);
                    printf("Element inserted successfully.\n");
                } else {
                    printf("Invalid position.\n");
                }
                break;

            case 2:
                // Delete an element
                printf("Enter the position to delete (0 to %d): ", n - 1);
                scanf("%d", &position);
                
                if (position >= 0 && position < n) {
                    deleteElement(arr, &n, position);
                    printf("Element deleted successfully.\n");
                } else {
                    printf("Invalid position.\n");
                }
                break;

            case 3:
                // Display the array
                displayArray(arr, n);
                break;

            case 4:
                printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
