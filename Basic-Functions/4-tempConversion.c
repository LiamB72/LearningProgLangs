#include <stdio.h>
#include <ctype.h>
#include <math.h>


int main(){

    char unit;
    float temp;
    
    printf("\nIs temperature in (F) or (C) : ");
    scanf("%c", &unit);

    unit = toupper(unit);

    if (unit == 'C'){

        printf("\nPlease Enter Your Temperature (Currently in C) : ");
        scanf("%f",&temp);

        temp = (temp * 9 / 5) + 32;

        printf("\nThe temperature in Farenheit is : %.1f",temp);

    } else if (unit == 'F'){
        printf("\nPlease Enter Your Temperature (Currently in F) : ");
        scanf("%f",&temp);
        
        temp = ((temp - 32) *  5) / 9;

        printf("\nThe temperature in Celsius is : %.1f",temp);
    } else {
        printf("\nThe temperature unit %c, is invalid", unit);
    }

    return 0;
}