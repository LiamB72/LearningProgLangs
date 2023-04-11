#include <stdio.h>
#include <string.h>

int main(){

    char name[25];

    printf("Please enter your name : ");
    fgets(name, 25, stdin); //"function" get string

    name[strlen(name)-1] = '\0'; //remove the extra new line

    while (strlen(name) == 0){
        printf("\nPlease enter your name : ");
        fgets(name, 25, stdin);
        name[strlen(name)-1] = '\0';
    }

    printf("Hello %s",name);

    return 0;
}