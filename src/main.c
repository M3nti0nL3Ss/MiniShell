#include"init.h"
#include"rl.h"
int main(){
    char cmd[MAXCOM];
    init_shell();
    while(1){
        takeInput(cmd);
        puts(cmd);
    }
}
