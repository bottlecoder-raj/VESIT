#include<stdio.h>
int main(){
    int n;
    int sum=1;
    printf("enter the number:");
    scanf("%d",&n);

    for(int i=n;i>=1;i--)
    {
        sum=sum*i;
    }
    printf("the factorial for %d=%d",n,sum);
    return 0;
}
