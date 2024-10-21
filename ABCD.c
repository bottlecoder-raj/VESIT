// Online C compiler to run C program online
#include <stdio.h>

void main() {
    // Write C code here
   int i,j,n,k;
  printf("enter the number of line:");
  scanf("%d",&n);
  for(i=1,k=1;i<=n;i++)
  {
      for(j=1;j<=i;j++)
      {
          printf("%c",64+k++);
      }
      printf("\n");
  }

    
}