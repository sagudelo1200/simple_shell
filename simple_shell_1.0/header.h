#ifndef HEADER_H
#define HEADER_H

/** external variables **/
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

/** prototypes **/
int words(void);
void commands(char *command);
int check(char *file);
void welcome(void);
int check_exit(char *word);
int check_env(char *word);
int _getline(char *s);
void  CtrlC(int sig);
void *_getenv(void);


#endif
