#ifndef HEADER_H
#define HEADER_H

/** environment variable **/
extern char **environ;

/** includes **/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <signal.h>
#include <errno.h>
/** prototypes **/
int words(void);
void commands(char **command);
int check(char *file);
int check_exit(const char *word);
int _getline(char *s);
char *_getenv(void);
char **getargs(char *buffer);
char *check_path(char *c);
char *_strcat(char *dest, char *src);
void _strcpy(char *dest, const char *src);
int _strlen(const char *string);
char *_strdup(const char *str);
char **getargs2(char *buffer);
void _env(void);
void check_env(const char *word);
int _strcmp(char *s1, char *s2);

#endif
