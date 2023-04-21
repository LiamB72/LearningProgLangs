#include <stdio.h>



void /*void = the datatype that will be returned (change it for other datatypes) */ sum(double x, double y, double z){ 
//Passed as parameters, datatype + order is wichtig, name not so wichtig
    z = x + y;
    printf("%.2lf plus by %.2lf equals to %.2lf", z, y, z); 
}
void subtract(double x, double y, double z){
    z = x - y;
    printf("%.2lf substracted by %.2lf equals to %.2lf", x, y, z);
}
void multiply(double x, double y, double z){
    z = x * y;
    printf("%.2lf multiplied by %.2lf equals to %.2lf", x, y, z);
}
void divide(double x, double y, double z){
    z = x / y;
    printf("%.2lf divided by %.2lf equals to %.2lf", x, y, z);
}

int main(){

    char operator;

    printf("\nEnter an operator between (-) (+) (*) (/) : ");
    scanf("%c",&operator);

    double num1;
    double num2;
    double res;

    printf("\nEnter a first number : ");
    scanf("%lf",&num1);
    printf("\nEnter a second number : ");
    scanf("%lf",&num2);

    switch (operator)
    {
    case '-':
        sum(num1, num2, res); //Passed as arguments
        break;
    case '+':
        subtract(num1, num2, res); //Passed as arguments
        break;
    case '*':
        multiply(num1, num2, res); //Passed as arguments
        break;
    case '/':
        divide(num1, num2, res); //Passed as arguments
        break;
    
    default:
        printf("Invalid Operator");
        break;
    }

    return 0;
}