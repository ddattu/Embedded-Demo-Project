#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include "login.h"
#include "case.c"

// #include"login.c"

int main()
{

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
        scanf("%d", &n);

        switch (n)
        {
        case 1:
            printf("Enter a String : ");
            scanf("%s", &str);
            fflush(stdin);
            printf("Enter a charcter which you want to count : ");
            scanf("%c", &ch);
            int a = frequencyChar(str, ch);
            printf("Frquency of entered character %c in a string is %d ", ch, a);
            break;

        case 2:
            case2();
            break;

        case 3:
            case3();
            break;

        case 4:
            case4();
            break;

        case 5:
            case5();
            break;

        case 6:
            case6();
            break;

        case 7:
            case7();
            break;

        default:
            printf("Incorrect choice!! please enter correct choice");
            break;
        }
    }
}
