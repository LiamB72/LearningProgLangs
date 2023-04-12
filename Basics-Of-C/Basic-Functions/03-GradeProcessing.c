#include <stdio.h>

int main(){

    char grade;

    printf("Please enter your grade : ");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
        printf("Perfect!");
        break;
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