#include<stdio.h>
#include "string.h"
#include "login.h"
// #include "login.c"

//Global variables
int n,from;
char ch;
char str[100];
char str1[100];
char username[20];
char password[20];

//function declarations
void case1();
void case2();
void case3();
void case4();
void case5();
void case6();
void case7();

//function definations
void case1(){
    printf("Enter a String : ");
    scanf("%s",&str);
    fflush(stdin);
    printf("Enter a charcter which you want to count : ");
    scanf("%c",&ch);
    int a = frequencyChar(str, ch);
    printf("Frquency of entered character %c in a string is %d ",ch,a);
}

void case2(){
    printf("Enter a String with numeric character : ");
    scanf("%s",&str);
    removeNonAlpha(str);
    printf("%s",str);
}

void case3(){
    printf("Enter a String  : ");
    scanf("%s",&str);
    int len =stringlength(str);
    printf("lenght of string is %d ",len);
}

void case4(){
    printf("Enter a String1  : ");
    scanf("%s",&str);
    fflush(stdin);
    printf("Enter a String2  : ");
    scanf("%s",&str1);
    concatenate(str,str1);
    printf("%s",str);        
}

void case5(){
    printf("Enter a String  : ");
    scanf("%s",&str);
    stingcopy(str, str1);
    printf("%s",str1);
}

void case6(){
    printf("Enter a String  : ");
    scanf("%s",&str);
    fflush(stdin);
    printf("Enter a value from you want  : ");
    scanf("%d",&from);
    fflush(stdin);
    printf("Enter a value upto you want  : ");
    scanf("%s",&n);
    findSubstring(str, from ,n, str1);
    printf("%s",str1);
}

void case7(){
    printf("Enter the username");
    scanf("%s",username);
    fflush(stdin);
    printf("Enter the password");
    scanf("%s",password);
    char *msg = login(username, password);
    printf("%s", msg);
}