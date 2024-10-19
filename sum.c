// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    int sum =0;
printf("enter a number:");
scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("Sum is:%d",sum);

    return 0;
}