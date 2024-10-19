#include<stdio.h>
int main(){
    float pmarks,mmarks,avg;
    printf("Enter physics marks:");
    scanf("%f",&pmarks);
    printf("Enter mathematics marks:");
    scanf("%f",&mmarks);
    avg=(pmarks+mmarks)/2;
    if(avg>=50 && pmarks>35 && mmarks>35)
    {
        printf("You are passed!");
    }
    else{
        printf("You failed!");
    }
    return 0;
}