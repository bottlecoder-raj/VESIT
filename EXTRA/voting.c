#include <stdio.h>

int main() {
    char name[50]; // Array to store the user's name
    int age;

    // Prompt the user for their name
    printf("Enter your name: ");
    scanf("%49s",&name);

    // Prompt the user for their age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Check if the user is eligible to vote
    if (age >= 18) {
        printf("%s you are eligible to vote.\n", name);
    } else {
        printf("%s you are not eligible to vote.\n", name);
    }

    return 0;
}
