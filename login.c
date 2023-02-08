#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include "login.h"

char *login(char *username, char *password);
char *signinverification(char *string, char *username, char *password);


char *login(char *username, char *password)
{
    FILE *fp;
    size_t len;
    size_t buffer_size;
    char *line;
    unsigned int i;
    line = NULL;
    buffer_size = 0;
    char *verify;

    fp = fopen("login.txt", "r");
    if (fp != NULL)
    {
        for (i = 1; -1 != (len = getline(&line, &buffer_size, fp)); i++)
        {
            verify = signinverification(line, username, password);
            // printf("\n%s\n", verify);
            // //     printf("login sucessfully");
            // // }
            free(line);
        }
        if (verify == NULL)
        {
            verify = "check username or password";
        }
    }
    return verify;
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
