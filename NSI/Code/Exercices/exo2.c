#include <stdio.h>

float calculSurface(float largeur, float longueur){
    return longueur*largeur;
}

int main(){
    
    float largeur;
    float longueur;

    printf("Enter a lenght : ");
    scanf("%f", &longueur);

    printf("Enter a width : ");
    scanf("%f", &largeur);

    printf("la surface est de : %.2f",calculSurface(largeur, longueur));

    return 0;
}