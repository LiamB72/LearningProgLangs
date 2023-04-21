#include <stdio.h>

int main(){
    int nb_valeur = 10;
    int res = 0;

    for (int n = 0; n < nb_valeur; n++)
    {
        res+=n;
    }
    printf("Somme des %d premiers nombres entiers est: %d",nb_valeur,res);
    return 0;
}