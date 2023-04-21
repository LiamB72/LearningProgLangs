#include <stdio.h>

int main()
{
    float x;          //declaration
    x = 0.1;          //initialization
    float y = 0.2;    //declaration + initialization

    float z = x+y;              //float value           -> to display : %f

    int age = 16;               //integer number        -> to display : %d
    char grade = 'A';           //sigle character       -> to display : %c
    char name[] = "Liam BERGE"; //Array of characters   -> to display : %s
    char job[] = "programmer";

    printf("\n\nHi, my name is %s, ", name);
    printf("I am %d y/o, ", age);
    printf("and my average grade is %c\n", grade);
    printf("And my dream job is to be a %s\n",job);
    printf("also, %0.1f + %0.1f = %0.1f\n\n",x,y,z); 
    //%0.(n)f --> n being the number of numbers that will be displayed
    //(the n is big, the more inaccurate the number displayed will be.)

    return 0;
}
