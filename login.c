#include <stdio.h>
#include <malloc.h>
#include "string.c"

char *login(char *username, char *password);

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
