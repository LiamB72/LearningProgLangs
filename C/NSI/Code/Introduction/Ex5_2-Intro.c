#include <stdio.h>
#define NB_VALEURS 10

int rechercheMini(int tab[]){
    int min = tab[0];
    for (int i = 0; i < NB_VALEURS; i++)
    {
        if (tab[i] < min){
            min = tab[i];
        }
    }
    return min;
}


int main ()
{
    int tab[NB_VALEURS]={12,38,42,3,17,22,31,80,99,32};
    int i;
    //appel de la fonction rechercheMini et affichage
    printf("valeur mini %d",rechercheMini(tab));
  return 0;
}