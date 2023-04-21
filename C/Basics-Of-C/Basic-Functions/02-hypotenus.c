#include <stdio.h>
#include <math.h>

int main(){

    float adjacent;
    float opposed;

    double hypotenus;

    printf("\nEnter a value for the segment A\n");
    scanf("%f", &adjacent);
    printf("\nEnter a value for the segment B\n");
    scanf("%f", &opposed);

    hypotenus = sqrt(pow(opposed, 2)+pow(adjacent, 2));

    printf("The lenght of the hypotenus of your triangle is %.3lf", hypotenus);

    return 0;
}