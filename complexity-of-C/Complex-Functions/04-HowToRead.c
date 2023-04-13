#include <stdio.h>

int main(){
    
    FILE *pF = fopen("C:\\Users\\Liam BERGE\\Desktop\\test.txt", "r");

    char buffer[255]; //Reads a line of the file.

    if (pF == NULL){
        printf("Unable to open file!\n");
    } else {
        while (fgets(buffer, 255, pF) != 0){
            printf("%s", buffer);
        }
    }

    fclose(pF);

    return 0;
}