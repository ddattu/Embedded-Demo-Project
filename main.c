#include<stdio.h>
#include<stdlib.h>
#include"string.c"

int main(){
    int n,from;
    char ch;
    char str[1000];
    char str1[1000];
    while (1)
    {
        printf("\n\nWhich operation you want to perform on String : \n\n");
        printf("1 : Count the frquency of character in String \n");
        printf("2 : Remove non Alpha character from String \n");
        printf("3 : Calculate String Lenght \n");
        printf("4 : Concatenate two Strings \n");
        printf("5 : Copy String \n");
        printf("6 : Find Substring \n");
        printf("7 : Exit \n\n");
        printf("Enter Your Choice :  \n");
        scanf("%d",&n);

        switch (n)
        {
        case 1:
            printf("Enter a String : ");
            scanf("%s",&str);
            fflush(stdin);
            printf("Enter a charcter which you want to count : ");
            scanf("%c",&ch);
            int a = frequencyChar(str, ch);
            printf("Frquency of entered character %c in a string is %d ",ch,a);
            break;
        
        case 2:
            printf("Enter a String with numeric character : ");
            scanf("%s",&str);
            removeNonAlpha(str);
            printf("%s",str);
            break;

        case 3:
            printf("Enter a String  : ");
            scanf("%s",&str);
            int len =stringlength(str);
            printf("lenght of string is %d ",len);
            break;

        case 4:
            printf("Enter a String1  : ");
            scanf("%s",&str);
            fflush(stdin);
            printf("Enter a String2  : ");
            scanf("%s",&str1);
            concatenate(str,str1);
            printf("%s",str);
            break;  

        case 5:
            printf("Enter a String  : ");
            scanf("%s",&str);
            stingcopy(str, str1);
            printf("%s",str1);
            break;  

        case 6:
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
            break;  

        case 7:
            exit(1);
            break; 

        default :
            printf("Incorrect choice!! please enter correct choice");
            break; 
        }
    }
    
}

