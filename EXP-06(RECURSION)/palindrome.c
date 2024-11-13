#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Recursive function to check if a string is a palindrome
int isPalindromeRecursive(char *str, int left, int right) {
    // Base case: when the left pointer crosses the right pointer
    if (left >= right) {
        return 1; // Palindrome
    }
    
    // If characters at left and right are not the same, it's not a palindrome
    if (str[left] != str[right]) {
        return 0; // Not a palindrome
    }

    // Recurse to check the next characters
    return isPalindromeRecursive(str, left + 1, right - 1);
}

void isPalindrome(char *str) {
    // Get the length of the string
    int len = strlen(str);
    
    // Call the recursive function
    if (isPalindromeRecursive(str, 0, len - 1)) {
        printf("\"%s\" is palindrome.\n", str);
    } else {
        printf("\"%s\" is not palindrome.\n", str);
    }
}

int main() {
    // Checking if given strings are palindrome
    int str[100];
    printf("Enter a string: ");
    scanf("%s",&str);
    
    isPalindrome(&str);
    return 0;
}
