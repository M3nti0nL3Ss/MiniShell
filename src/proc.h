#ifndef PROC_
#define PROC_
#include<libft/libft.h>
#include<stdio.h>
#include "rl.h"
#define MAXPIPES 5
char** parse_spaces(char*);
char** parse_pipes(char*);
int processCMD(char*, char***, char***);

#endif
