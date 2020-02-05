#include <stdio.h>
#include <string.h>

void MorseDeCode(char *string){
    
    printf("Wczytany tekst     --->    %s", string);
    printf("Odkodowany tekst   --->    ");
    char t[]= "%TEMNAIOGKDWRUS-.QZYCXBJP%L-FVH09%8%%%7%%%%%%%61%%%%%%%2%%%3%45";
    int stringLength = strlen(string)-1;
    int i, j = 0;

    for(i = 0; i<stringLength; i++){ 
        if(string[i] == '-'){ 
            j=j*2+1;
        }
        else if (string[i] == '.') { 
            j=j*2+2;
        }
        else if (string[i] == ' ' && string[i+1] == ' '){
            printf("%c ", t[j]);
            i+=4;
            j=0;
        }
        else {
            printf("%c", t[j]);
            j=0; 
        }
    }
    
    printf("%c", t[j]);
    putchar('\n');

} 