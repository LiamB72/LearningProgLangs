#include <stdio.h>
#include <math.h>

int main(){

    double AB;
    float xA;
    float xB;
    float yA;
    float yB;

    printf("Enter a value for xA : ");
    scanf("%lf", &xA);
    printf("Enter a value for xB : ");
    scanf("%lf", &xB);

    double xAB = (xB-xA)*(xB-xA);
    printf("xAB = %.2lf\n",xAB);


    printf("Enter a value for yA : ");
    scanf("%lf", &yA);
    printf("Enter a value for yB : ");
    scanf("%lf", &yB);

    double yAB = (yB-yA)*(yB-yA);
    printf("yAB = %.2lf\n",yAB);

    AB = sqrt(xAB+yAB);

    printf("The segment AB = %.2lf", AB);
    return 0;
}