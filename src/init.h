#ifndef INIT_
#define INIT_
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

#define MAXCOM 1000 
#define MAXLIST 100 
//#define MAXPIPE 4
#define ALLOC(X) sizeof(char)*X+sizeof(int)

#define clear() printf("\033[H\033[J")

typedef struct {
    int id;
    char* cmd;
}History;

typedef struct {
    int size;
    History* cmds[MAXLIST];
}HistoryList;

void init_history();
void add_history(char*);
void show_history();
void init_shell();
#endif
