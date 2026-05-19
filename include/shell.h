#ifndef SHELL_H
#define SHELL_H
    
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

#define LSH_RL_BUFSIZE 1024
#define LSH_TOK_BUFSIZE 64
#define LSH_TOK_DELIM " \t\r\n\a"

void lsh_loop(void);

char *lsh_read_line(void);
char **lsh_tokenization(char *line);

int lsh_launch(char **args);
int lsh_execute(char **args);

int lsh_cd(char **args);
int lsh_help(char **args);
int lsh_exit(char **args);

int lsh_num_builtins(void);

extern char *builtin_str[];
extern int (*builtin_func[])(char **);
#endif