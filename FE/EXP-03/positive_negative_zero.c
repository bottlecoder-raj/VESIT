#include<stdio.h>
int main(){
    int  input;
    printf("Enter a number:");
    scanf("%d",&input);
    if(input==0){
        printf("ZERO");
    }
    else if(input<0){
        printf("NEGATIVE");
    }
    else if(input>0){
        printf("POSITIVE");
    }
 return 0;
}
