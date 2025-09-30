#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left, *right;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to insert a new node into the binary search tree
struct Node* insertNode(struct Node* root, int value) {
    if (root == NULL) return createNode(value);
    if (value < root->data)
        root->left = insertNode(root->left, value);
    else
        root->right = insertNode(root->right, value);
    return root;
}

// Function to perform an in-order traversal of the tree
void inorderTraversal(struct Node* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

// Function to search for a value in the binary search tree
struct Node* searchNode(struct Node* root, int value) {
    if (root == NULL || root->data == value)
        return root;
    if (root->data < value)
        return searchNode(root->right, value);
    return searchNode(root->left, value);
}

int main() {
    struct Node* root = NULL;
    int n, i, value, searchValue, choice;

    printf("Enter the number of elements you want to insert into the BST: ");
    scanf("%d", &n);
    printf("Enter the elements to insert into the BST:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &value);
        root = insertNode(root, value);
    }

    while (1) {
        printf("\nMenu:\n");
        printf("1. Search for an element in the BST\n");
        printf("2. Display In-Order Traversal of BST\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to search: ");
                scanf("%d", &searchValue);
                if (searchNode(root, searchValue) != NULL)
                    printf("Value %d is found in the BST.\n", searchValue);
                else
                    printf("Value %d is not found in the BST.\n", searchValue);
                break;
            case 2:
                printf("In-Order Traversal of BST: ");
                inorderTraversal(root);
                printf("\n");
                break;
            case 3:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
