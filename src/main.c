#include"init.h"
#include"rl.h"
#include"proc.h"
#include "exec.h"

int main(){
    char cmd[MAXCOM];
    char **parsedArgs; 
	char **parsedArgsPiped; 
	int execFlag = 0; 
    init_shell();
    while(1){
        if(takeInput(cmd)) continue;
        execFlag = processCMD(cmd,&parsedArgs, &parsedArgsPiped);
        if (execFlag == 1)
            execArgs(parsedArgs);
    }
}
