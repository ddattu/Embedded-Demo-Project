#include<stdio.h>
#include"string.c"

int main(){
    char str[1000]="abcdefg";
    char str1[1000]="12345678pqrstuv12-!@#$%^&*()_wxyz";
    // char d = "d";
    // int a = frequencyChar(str,'d');
    // // printf("%d",a);

    // stingcopy(str,str1);
    // printf("%s",str1);
    // int b= stringlength(str);
    // printf("%d",b);

    // concatenate(str,str1);
    // printf("%s",str);

    // findSubstring(str1,2,7,str);
    // printf("%s",str);
    

    removeNonAlpha(str1);
    printf("%s",str1);
}