#include <stdio.h>
#include <unistd.h>
#include <string.h>

#define MAX_LINE    70 /*70 character max per line*/


int main(){

    printf("%s","Welcome to Our Shell, we support most of the common
    commands and few others :)... use help command for more
    information");
    bool isRunning = true;
    char input[70];
    int pid;
    while(isRunning){
        printf("\nhome/kimo/Desktop>");
        fflush(stdout); /*######*/

        gets(input);
        pid = fork();
        if (pid<0){
            fprintf(stderr,"ERROR\n")
        }
        else if (pid==0){
            getVal = execute(input);
            if (getVal ==1 ){
            continue
            }
            else{
            printf("Sorry this command is not supported")
            }
        }
        else //parent
        {

        }

        return 0;
    } 
}


int execute(char *command){
    if(command[0]=='c' && command[1]=='d'){
        
    }
}