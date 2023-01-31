#include <stdio.h>
#include <string.h>
#include <ctype.h>

int frequencyChar(char *str, char *searchCharacter);
int removeNonAlpha(char *str);
int stringlength(char *str);
int concatenate(char *str1, char *str2);
int stingcopy(char *source, char *destination);
void findSubstring(char *source, int from, int n, char *target);
char *signinverification(char *string, char *username, char *password);

int frequencyChar(char *str, char *searchCharacter)
{
    int i = 0, count = 0;
    printf("%c\n", *searchCharacter);
    while (str[i] != '\0')
    {
        if (str[i] == *searchCharacter)
        {
            count++;
        }
        i++;
    }
    return count;
}

char *signinverification(char *string, char *username, char *password)
{
    int i = 0, j = 0, k = 0, cmp = 0;
    char str1[30];
    char str2[30];
    char *msg=NULL;
    // printf("%s",username);
    while (string[i] != '\0')
    {
        if (string[i] == ':')
        {
            while (string[i] != ',')
            {
                i++;
                str1[j] = string[i];
                j++;
            }
            j--;
            str1[j] = '\0';
            cmp = strcmp(str1, username);
            // printf("\n%s\n%s\n%d\n", str1, username, cmp);
            if (cmp == 0)
            {
                while (string[i] != '\0')
                {
                    if (string[i] == '=')
                    {
                        while (string[i] != '.')
                        {
                            i++;
                            str2[k] = string[i];
                            k++;
                        }
                        k--;
                        str2[k] = '\0';
                        cmp = strcmp(str2, password);
                        // printf("\n%s\n%s\n%d", str2, password, cmp);
                        if (cmp == 0)
                        {
                            // memcpy(msg, "login sucessfully");
                            msg="login sucessfully";
                        }
                        else
                        {
                            msg="password is incorrect";
                        }
                    }
                    i++;
                }
            }
        }
        i++;
    }
    // printf("%s",msg);
    return msg;
}

int stingcopy(char *source, char *destination)
{
    int i = 0;
    while (source[i] != '\0')
    {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
    return 0;
}

int stringlength(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

int concatenate(char *str1, char *str2)
{
    int len = strlen(str1), i = 0;
    while (str2[i] != '\0')
    {
        str1[len] = str2[i];
        i++;
        len++;
    }
    return 0;
}

void findSubstring(char *source, int from, int n, char *target){
    int j=0;
    int i;
    for (i=from;i<(from+n);i++){
        target[j]=source[i];
        j++;
    }
    target[j] = '\0';
}

int removeNonAlpha(char *str)
{
    int i = 0, j = 0;
    char changedstr[1000];
    while (str[i] != '\0')
    {
        if (isalpha(str[i]))
        {
            changedstr[j] = str[i];
            j++;
        }
        i++;
        changedstr[j] = '\0';
    }
    strcpy(str, changedstr);
    return 0;
}
