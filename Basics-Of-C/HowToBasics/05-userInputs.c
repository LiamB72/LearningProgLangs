#include <stdio.h>
#include <string.h>

int main(){

    char name[25]; //defines a blank array to filled
    int age; //defines a blank integer to filled

    printf("\n\nWhat's your lil name? ");

    //scanf("%s", &name); //function that scan the terminal for user input
    // --> Stop at any whitespace = not ideal for a full name

    //if composed name for the array, use :
    fgets(name, 25, stdin); //variable, then the size of the input, then the input specifier 
                            //                          (most used = stdin -> standart input)

    name[strlen(name)-1] = '\0'; //Quite advance stuff, though, quite easy to follow through
                                 //First you get the str(ing) len(ght) of name and you substract 1
                                 //And the result is equal to \0 (gets rid off the new line)

    printf("%s.. that's pretty cute :3\n", name);

    printf("And how old are you, lil guy? ");

    scanf("%d", &age); //if integer use "&", means the address of operator
    //                  which is necessary to pass the address of the variable to the function

    printf("Well hello %s, being %d y/o is quite the dramatic age.", name, age);
    return 0;
}