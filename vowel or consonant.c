#include<stdio.h>
 int main(){
 char input;
 char array[]={'a','e','i','o','u'};
 printf("enter the alphabet:");
 scanf("%c",&input);
 for(int i=0;i<5;i++)
 {
     if(input==array[i]){
        printf("vowel");
        goto end;}

     }
printf("consonant.");

end:
   return 0;
 }
