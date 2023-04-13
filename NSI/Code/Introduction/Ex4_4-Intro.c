#include <stdio.h>

const float PI = 3.14159;

void volumeSphere(float rayon){
    double vol = 4 * PI * rayon * rayon * rayon;
    printf("%.2lf", vol);
}

int main(){

    float rayon;

    printf("Enter a radius of your sphere : ");
    scanf("%f", &rayon);

    volumeSphere(rayon);

    return 0;
}