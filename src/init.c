#include"init.h"
HistoryList h_list;
void init_history(){
    h_list.size = -1;
}

void add_history(char* cmd){
    int id = h_list.size>-1 ? h_list.cmds[h_list.size]->id +1:0;
    History* newCMD=malloc(ALLOC(ft_strlen(cmd)));
    newCMD->id=id;
    newCMD->cmd=cmd;
    h_list.cmds[++h_list.size]=newCMD;
}

void show_history(){
    if(h_list.size == -1){
        puts("No history");
        return;
    }
    for(int i=0;i<h_list.size;i++)
        printf("\n%d\t%s",h_list.cmds[i]->id,h_list.cmds[i]->cmd);
}

void init_shell() {
    init_history();
	clear();
	char* username = getenv("USER"); 
	printf("\n\nHello [%s]\n", username);
}
