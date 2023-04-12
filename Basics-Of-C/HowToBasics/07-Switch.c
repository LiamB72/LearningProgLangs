#include <stdio.h>

int main(){

    char grade;

    printf("Please enter your grade : ");
    scanf("%c", &grade);


    //Switch is like a "if" and "else" combinaision statments, it is just 
    //more efficient for a value to be tested against many cases.

    switch (grade)
    {
    case /* constant-expression */'A':
        /* code */printf("Perfect!");
        break; //used to exit out of the switch
    case 'B':
        printf("You did great!");
        break;
    case 'C':
         printf("You did okay!");
        break;
    case 'D':
        printf("Meh!");
        break;
    case 'F':
        printf("FAILED!");
        break;
    
    default:
        printf("Invalid!");
        break;
    }
    return 0;
}