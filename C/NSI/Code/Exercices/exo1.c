#include <stdio.h>
#include <math.h>

int main(){

    double AB;
    double xA;
    double xB;
    double yA;
    double yB;

    printf("Enter a value for xA : ");
    scanf("%lf", &xA);
    printf("Enter a value for xB : ");
    scanf("%lf", &xB);
    printf("Enter a value for yA : ");
    scanf("%lf", &yA);
    printf("Enter a value for yB : ");
    scanf("%lf", &yB);

    AB = sqrt(pow((xB-xA),2)+pow((yB-yA),2));

    printf("The segment AB = %.4lf", AB);
    return 0;
}