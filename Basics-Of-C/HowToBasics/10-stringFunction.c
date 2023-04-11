#include <stdio.h>
#include <string.h>



int main(){

    char string1[] = "Liam";
    char string2[] = "BERGE";

    /*
    strlwr(string1); //converts a string to lowercases.
    //strupr(string2); //converts a string to uppercases.

    strcat(string1, string2); 
    //append string 2 to the end of string 1

    strncat(string1, string2, 1); 
    //append n characters from string 2 to string 1

    strcpy(string1, string2); 
    //"copy" string 2 to string 1 -> replaces the characters of string 1 by the ones of string 2

    strncpy(string1, string2, 1);
    //"copy" n characters from string 2 to string 1 -> replaces n characters of string 1 by the ones of string 2


    strset(string1, '?'); 
    //sets all the characters of a string by the given character
    
    strnset(string1, 'x', 2); 
    //sets the first n characters of the string to the give character

    strrev(string1);
    //reverses the string
    */

    //int lenStr = strlen(string1);
    //int strCompare = strcmp(string1, string2);
    int strnCompare = strncmp(string1, string2, 2);

    //strnicmp and strcmpi just are the same as strcmp but they ignore the case sensivity;

    //printf("\n%d\n", lenStr );

    if (strnCompare == 0){
        printf("Those strings are the same");
    } else {
        printf("Those strings aren't the same");
    }

    return 0;
}