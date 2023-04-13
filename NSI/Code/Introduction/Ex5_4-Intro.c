#include <stdio.h>
#define NB_VALEURS 10

void triSelection(int tab[]){
    int indMini;
    int temp;
    for (int i = 0; i <= NB_VALEURS-2; i++)
    {
        indMini = i;

        for (int j = i + 1; j <= NB_VALEURS-1; j++)
        {
            if (tab[j] < tab[indMini]){
                indMini = j;
            }
        }
        if (i != indMini){
            temp = tab[i];
            tab[i] = tab[indMini];
            tab[indMini] = temp;
        }
    }
}

int main ()
{
    int tab[NB_VALEURS]={3,2,5,1,9,8,0,7,4,6};
    int i;
    //appel de la fonction de triSelection
    triSelection(tab);
    //affichage du tableau
    for (i=0;i<NB_VALEURS;i++){
        printf("%d,",tab[i]);
    }
  return 0;
}