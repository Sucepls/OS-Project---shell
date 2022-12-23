#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX_WORDS   1000

#define MAX_LINE    70 /*70 character max per line*/


int main(){

    printf("%s","Welcome to Our Shell, we support most of the common commands and few others :)... use help command for more information");
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
int firstword(FILE *fp) {
    int echo, chr;
    fp = fopen ("data.txt", "r");
    echo = 1;
    chr = fgetc (fp);
    while (chr != EOF) {
        if (chr == '\n') echo = 1;
        if (isblank (chr)) echo = 0;
        if (echo ) putchar (chr);
        chr = fgetc (fp);
    }
    fclose (fp);
    return 0;
}
int mostrepeat(FILE *fptr) {
    char path[100];
    int i, len, index, isUnique;
    char words[MAX_WORDS][50];
    char word[50];
    int  count[MAX_WORDS];
    printf("Enter file path: ");
    scanf("%s", path);
    fptr = fopen(path, "r");
    if (fptr == NULL)
    {
        printf("Unable to open file.\n");
        printf("Please check you have read previleges.\n");
        exit(EXIT_FAILURE);
    }
    for (i=0; i<MAX_WORDS; i++)
        count[i] = 0;
    index = 0;
    
    while (fscanf(fptr, "%s", word) != EOF)
    {
        strlwr(word);
        len = strlen(word);
        if (ispunct(word[len - 1]))
            word[len - 1] = '\0';
        isUnique = 1;
        for (i=0; i<index && isUnique; i++)
        {
            if (strcmp(words[i], word) == 0)
                isUnique = 0;
        }
        if (isUnique) 
        {
            strcpy(words[index], word);
            count[index]++;

            index++;
        }
        else
        {
            count[i - 1]++;
        }
    }
    fclose(fptr);
    printf("\nOccurrences of all distinct words in file: \n");
    int res = count[0];
    int in = 0;
    for (i=1; i<index; i++) {
    	if (count[i] > res) {
    		res = count[i];
    		in = i;
		}
	}
	printf("%-15s", words[in]);    
    

    return 0;
}