#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    int sum;
   char str[100];
   printf("enter the string:");
   scanf("%s",&str);
   int length=strlen(str);
 
   for(int i=0;i<length;i++){
       if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
       sum+=1;
   }
   printf("%d\n",sum);
   return 0;
   

}
