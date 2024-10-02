#include<stdio.h>
int main(){
   
    float p,n,r,si;
    printf("Enter the principal amount: ");
    scanf("%f",&p);

    printf("Enter the rate of interest: ");
    scanf("%f",&r);

    printf("Enter the time period: ");
    scanf("%f",&n);

    si=(p*n*r)/100;

    printf("\n");
    printf("The simple interest: %f\n",si);


    return 0;
}