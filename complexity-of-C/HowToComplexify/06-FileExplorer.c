#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

int main(){

    char name[25];

    printf("How do you want to name your file? : ");
    fgets(name, 25, stdin);

    name[strlen(name)-1] = '\0';

    //You specify the place where the document will be generated like this :
    //FILE *pF = fopen(C:\\Users\\{UserName}\\Desktop\\name,"w");
    FILE *pF = fopen("C:\\Users\\Liam BERGE\\Desktop\\test.txt","w");

    //You can write : "w"
    //You can append : "a"
    //You can read : "r"

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