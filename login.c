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
    fp = fopen("login.txt", "r");
    if (fp != NULL)
    {
        for (i = 1; -1 != (len = getline(&line, &buffer_size, fp)); i++)
        {
            int equalusername = usernamestringsorting(line, username);
            // printf("%d\n",equalusername);
            int equalpassword = passwordstringsorting(line, password);
            // printf("%d\n",equalpassword);
            if (equalpassword == 1 && equalusername == 1)
            {
                printf("login sucessfully");
            }
            else{
                printf("login failed");
            }
            free(line);
        }
    }
    // char str[100]="login file not found";
    // return "login file not found";
}

/*
  FILE            *f;
    size_t          len;
    size_t          buffer_size;
    char            *line;
    unsigned int    i;

    line         = NULL;
    buffer_size  = 0;

    if( argc != 2) {
        fprintf(stderr, "Usage: %s filename\n", argv[0]);
        return 1; }

    if( NULL == (f = fopen(argv[1], "r"))) {
        fprintf(stderr, "Could not open %s\n", argv[1]);
        perror("Error: ");
        return 1; }

    for(i=1; -1  != (len = getline(&line, &buffer_size, f));i++ )
        printf("%4u: %4lu %s", i, len, line);

    free(line);
    fclose(f);

    return 0;

*/