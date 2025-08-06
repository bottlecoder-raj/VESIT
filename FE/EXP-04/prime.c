#include <stdio.h>

int main() {
    int  num, input,i, isPrime;
    printf("ENTER:");
    scanf("%d",&input);

    for (num = 2; num <=input; num++) {
        isPrime = 1; 

        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                isPrime = 0; // Not a prime number
                break; // Exit the loop
            }
        }

        // If isPrime is still 1, print the number
        if (isPrime) {
            printf("%d ", num);
        }
    }
    printf("\n");

    return 0;
}
