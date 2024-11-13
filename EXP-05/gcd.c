// written by Manthan illake
#include <stdio.h>
int gcd(int *a,int *b)
{
    int t;
    while(*b!=0)
    {
        t = *a % *b;

        *a = *b;
        *b = t;
    }
    return a;
}
int main() {
    int a,b;
    printf("Enter the 1st no: ");
    scanf("%d",&a);
    printf("Enter the 2nd no: ");
    scanf("%d",&b);
    gcd(&a,&b);
    printf("Greatest common divisor is:%d",a);
}
