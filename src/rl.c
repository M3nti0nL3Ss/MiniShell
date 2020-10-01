#include"rl.h"

int takeInput(char* str) { 
    char buf[MAXCOM]; 
    printf("\n$> ");
    fgets(buf, sizeof(buf), stdin);//TODO - Change later
    int len=strlen(buf);
    if (len != 0) {
        buf[len-1]=0x20;
        add_history(buf);
        strcpy(str, buf); 
        return 0; 
    } else return 1; 
}
