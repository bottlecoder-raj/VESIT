#include<stdio.h>
 int main(){
     int a,b,c,temp;
 //printf("enter the three numbers:\n");
 printf("enter 3 numbers: ");
 scanf("%d %d %d",&a,&b,&c);
   printf("The 3 numbers are:%d,%d,%d",a,b,c);
 

 //printf("The three numbers are :%d,%d,%d ",a,b,c);
//printf("\n");
 if(a<=b && a<=c)
 {
     temp=a;

 }
else if(b<=a && b<=c)
{
    temp=b;
}
else if(c<=a && b>=c)
{
    temp=c;
}
else if(b==a && b==c)
{
   printf("\nThe numbers are same.\n");
}
printf(" \n %d is the smallest\n",temp);



 return 0;}
