#include <stdio.h>
#define NB_VALEURS 10

float rechercheMoy(int tab[]){
    float moy = 0;
    float total = 0;
    for (int i = 0; i < NB_VALEURS; i++)
    {
        //a += list[i]/len(list)
        total += tab[i];
        printf("%d\n",total);
    }
    moy = total/NB_VALEURS;
    return moy;
}


int main ()
{
    int tab[NB_VALEURS]={12,38,42,3,17,22,31,80,99,32};
    int i;
    //appel de la fonction rechercheMini et affichage
    printf("valeur moyenne %.2f",rechercheMoy(tab));
  return 0;
}