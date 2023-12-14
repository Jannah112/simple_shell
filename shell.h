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

int _strlen(char *s);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
int _strcmp(char *s1, char *s2);
char *_strdup(char *str);
int print_env(void);
char *our_getenv(char *name);
char *read_input(void);
void malloc_return(void *str);
void tok(char *input, char *p_name, int n);
void fre(char *, char *, char *);
void fr(char *, char **, char *, char *, char *);
int executes(char **argv, int n, char *p_name);
char *get_path(char *input);
int cd(char **argv, int n, char *p_name);
void print_str(char *p_name, int n, char *arg);
void handle_integer(int num);
int number_of_digits(int num);
void exit_stat(pid_t i, int j);

#endif
