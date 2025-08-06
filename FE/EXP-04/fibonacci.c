#include<stdio.h>
int main(){
    int g;
     int first=0;
     int second=1;
     printf("0,1,");
    for(int i=1;i<=8;i++)
   {

    int final=first+second;
    printf("%d,",final);
    first=second;
    second=final;
   }

    return 0;
}

