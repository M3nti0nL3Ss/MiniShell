#include "proc.h"

char** parse_spaces(char* str){
    return ft_strsplit(str," ");
}

char** parse_pipes(char* str){
    if(ft_strstr(str,"|"))
        return ft_strsplit(str,"|");
    return NULL;
}

int cmdHandler(char** parsed){
    unsigned int NoCmds = 5,cmd,found=0;
    char* cmds[] = {"help","exit","hi","history","clear"};
    for (cmd=0;cmd<NoCmds;cmd++) { 
        if (ft_strcmp(parsed[0], cmds[cmd]) == 0) {
            found=cmd+1;
            break; 
        } 
    }
    switch(found){
        case 1:
            puts("No I won't Help ya!");
            return 1;
        break;
        case 2:
            printf("\nBye\n");
            exit(0);
        break;
        case 3:
            printf("\nHello %s,\nYou know what ToDo\n", getenv("USER"));
            return 1;
        break;
        case 4:
            show_history();
            return 1;
            break;
        case 5:
            clear();
            return 1;
            break;
    }
    return 0;
}

int processCMD(char* str, char*** parsed, char*** parsedpipe){ 
    char** strpiped=NULL;
    int piped = 0;
    *parsed = malloc(sizeof(char)*MAXLIST);
    *parsedpipe = malloc(sizeof(char)*MAXLIST);
    
    strpiped = parse_pipes(str);
    if (strpiped) {
        *parsed=parse_spaces(strpiped[0]);
        *parsedpipe=parse_spaces(strpiped[1]);
    } else *parsed=parse_spaces(str);
    
    //while(*parsedpipe[piped])piped++;

    if (cmdHandler(*parsed)) 
        return 0;
    else
        return 1 + piped;
}
