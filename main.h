#ifndef MAIN_H
#define MAIN_H

/* Libraries */
#include <stdio.h>
#include <stdlib.h>  
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

/* Constants */
#define PRMPT "(MyShell) $ "
#define TRUE 1 
#define FALSE 0
#define SUCCESS 0
#define FAILURE -1
#define STDIN 0
#define ERR -1

/* Function prototypes */  
char *get_line(char **line, size_t *len, int fd);
char *copy_str(char *str, int bytes);
char *str_tokenize(char *str, const char *delims);
void execute(char **args);  
char *get_cmd_path(char *cmd);

#endif /* MAIN_H */
