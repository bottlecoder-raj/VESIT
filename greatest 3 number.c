#include<stdio.h>
 int main(){
     int a,b,c,temp;
 //printf("enter the three numbers:\n");
 printf("enter 1st number: ");
 scanf("%d",&a);
  printf("enter 2nd number: ");
 scanf("%d",&b);
  printf("enter 3rd number: ");
 scanf("%d",&c);

 //printf("The three numbers are :%d,%d,%d ",a,b,c);
//printf("\n");
 if(a>=b && a>=c)
 {
     temp=a;

 }
else if(b>=a && b>=c)
{
    temp=b;
}
else if(c>=a && b<=c)
{
    temp=c;
}
else if(b==a && b==c)
{printf("\n");
   printf("The numbers are same.\n");
}
printf("\n");
printf("%d is the greatest\n",temp);



 return 0;}
