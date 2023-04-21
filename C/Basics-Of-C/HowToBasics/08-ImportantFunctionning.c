#include <stdio.h>


/*Return types :
 void won't return anything
 int will return an integer value
 float will return a float value
 double will return a double value
 char will return a char value
 ...
 */

void birthday(char[]); //The function prototype causes the compiler to flag an error if arguments are missing

/*For a function to receive information from other functions you need to pass the variable in argument
like this : 

double square(double x){
    return x*x
}

double x = square(4);
printf("\n%lf",x);

Terminal : 
16
*/
int main(){

    char name[] = "Liam";
    birthday(name);
    birthday(name);
    birthday(name);

    return 0;
}

void birthday(char name[]){
    printf("\nHappy Birth to %s\n",name);
    printf("Happy Birth to %s\n",name);
    printf("Happy Birth Dear.. You");
    printf("Happy Birth to %s\n",name);
}