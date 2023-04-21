#include <stdio.h>

int main(){

    double sum = 0;
    double addValue;

    do{ //execute the code first then checks if the condition is true and repeat the iteration until the condition is false.
        printf("Please enter a number. ");
        scanf("%lf",&addValue);

        sum += addValue;
    } while (addValue >= 0);
    
    printf("sum of each number you gave : %0.2lf", sum);

    return 0;
}