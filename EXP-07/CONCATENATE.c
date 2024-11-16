#include <stdio.h>
#include <string.h>
int main(){
    char str1[] = "HELLO";
    char str2[] = " WORLD";
    strcat(str1, str2);
    printf("After concatenating Str 1 and Str 2;Str 1 will be:%s\n",str1);
    return 0;


}
