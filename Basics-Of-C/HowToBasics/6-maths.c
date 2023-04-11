#include <stdio.h>
#include <math.h>

int main(){

    /* arithmetic operators :

    +  (addition)
    -  (substraction)
    *  (multiply)
    /  (divide)
    %  (modulus)
    ++  (increment)
    --  (decrement)
    */

    int y = 25;
    int x = 5;

    //int z = x + y;
    float z = x / (float) y;

    printf("%.2f\n",z);z;

    /*---------------------------------------*/

    //math part:

    double sqrtValue        = sqrt(9);
    double powValue         = pow(/*raise*/2, /*to the power of*/ 4);
    int    roundedValue     = round(3.14);
    int    ceilValue        = ceilf(3.14);
    int    floorValue       = floor(3.99);
    double AbsoluteValue    = fabs(-100);
    double LogarithmValue   = log(-100);
    double SineValue        = sin(45);
    double CosineValue      = cos(45);
    double TanganteValue    = tan(45);


    printf("%lf", TanganteValue);

    return 0;
}