#include<stdio.h>
int main(){
   
    float c,f;
    printf("Enter the temperature in farenheit: ");
    scanf("%f",&f);


    c=(5*(f-32))/9;

    printf("\n");
    printf("Temperature is %f C\n",c);


    return 0;
}