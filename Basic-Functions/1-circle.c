#include <stdio.h>
#include <math.h>

int main(){

    const double pi = 3.14159;
    double radius;
    double circumference;
    double area;

    printf("\nWhat radius will you give to yoru circle? ");
    scanf("%lf", &radius);

    circumference = 2 * pi * radius;
    area = pi * radius * radius;

    printf("\nRight, so with the radius you gave, the circumference of your circle is : %0.2lf.\nMoreover, the area of that same circle is : %.2lf. ",circumference,area);
}