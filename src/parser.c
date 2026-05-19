#include "shell.h"

char **lsh_tokenization(char *line){
    int bufsize = LSH_TOK_BUFSIZE, position = 0;
    char **tokens = malloc(sizeof(char* ) * bufsize);
    char *token;

    if(!tokens){
        fprintf(stderr, "lsh: allocation error\n");
        exit(EXIT_FAILURE);
    }

    token = strtok(line, LSH_TOK_DELIM);
    while(token != NULL){
      tokens[position] = token;
      position++;

      if(position >=  bufsize){
        bufsize += LSH_TOK_BUFSIZE;
        tokens = realloc(tokens, sizeof(char* ) * bufsize);
        if(!tokens){
            fprintf(stderr, "lsh: allocation error\n");
            exit(EXIT_FAILURE);
        }
      }
      token = strtok(NULL, LSH_TOK_DELIM);
    }
    tokens[position] = NULL;
    return tokens;
}