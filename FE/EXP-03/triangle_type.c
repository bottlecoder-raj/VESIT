#include<stdio.h>
int main(){
    float a,b,c;
    printf("Enter a values for triangle.");
    printf("Side 1: ");
    scanf("%f",&a);
    printf("Side 2: ");
    scanf("%f",&b);
    printf("Side 3: ");
    scanf("%f",&c);

    if(a==b && b==c)
    { 
        printf("The given triangle is an Equilateral triangle.\n");

    }
    else if(a==b ||b==c||a==c){
        printf("The given triangle is an Isosceles triangle.\n");

    }
    else{
                printf("The given triangle is an Scalene triangle.\n");

    }

   
 return 0;
}
