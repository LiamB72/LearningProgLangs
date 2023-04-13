#include <stdio.h>

int main(){
    int valeur = 0;
    int somme = 0;

    while (valeur >= 0)
    {
        printf("Votre chiffre : ");
        scanf("%d", &valeur);

        if (valeur > 0){
            somme += valeur;
        }
    }
    printf("la somme des nombres est %d",somme);
    return 0;
}