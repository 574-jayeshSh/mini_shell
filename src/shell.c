#include <stdio.h>
#include <stdlib.h>
#include "shell.h"

void lsh_loop(void)
{
    char *line;
    char **args;
    int status;

    do {
        printf("Mini shell running...\n");
        printf("> ");

        line = lsh_read_line();
        args = lsh_tokenization(line);
        status = lsh_execute(args);

        free(line);
        free(args);

    } while (status);
}