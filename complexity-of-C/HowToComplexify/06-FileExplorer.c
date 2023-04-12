#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

int main(){

    char name[25];

    printf("How do you want to name your file? : ");
    fgets(name, 25, stdin);

    name[strlen(name)-1] = '\0';


    FILE *pF = fopen(name,"w");

    fprintf(pF, "Something's written here, but I don't know what it is...");

    fclose(pF);

    char delete;

    printf("Do you wish to destroy your file? (Y/N)");
    scanf("%c", &delete);

    delete = toupper(delete);

    if (delete == 'Y'){
        remove(name);
    }

    return 0;
}