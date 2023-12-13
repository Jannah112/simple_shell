#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>

extern char **environ;

int print_env(void);
char *our_getenv(const char *name);
char *read_input(void);
int malloc_return(char *str);
void tok(char *input, char *p_name, int n);
void fre(char *, char *, char *);
void fr(char *, char **, char *, char *, char *);
int executes(char **argv, int n, char *p_name);
char *get_path(char *input);
int cd(char **argv, int n, char *p_name);

#endif
