#include "exec.h"

void execArgs(char** parsed) {
    pid_t pid = fork();

    if (pid == -1) {
        puts("Failed forking child.."); 
        return;
    } else if (pid == 0) {
        if (execvp(parsed[0], parsed) < 0)
            puts("No such command.");
        exit(0);
    } else {
        wait(NULL); 
        return;
    }
} 
