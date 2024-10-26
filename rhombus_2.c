//TYPE 1:
// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int i,j,rows;
   printf("Enter the number of rows:");
   scanf("%d",&rows);
   
   for(i=1;i<=rows;i++)
   {
       for(j=1;j<=rows-i;j++){
           printf(" ");
       }
        for(j=1;j<=rows;j++){
           printf("*");
       }printf("\n");
   }

    return 0;
}


//TYPE 2:
// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int i,j,rows;
   printf("Enter the number of rows:");
   scanf("%d",&rows);
   
   for(i=1;i<=rows;i++)
   {
      for(int z=1;z<i;z++){
               printf(" ");
       }
       for(j=1;j<=rows;j++){
               printf("*");
       }
               printf("\n");
          
    }
    return 0;
}
