#include <stdio.h>
#include <string.h>
#include <ctype.h>

void gimmeMyMoneyBack(int somme, int pieces[], int sizeArray, int choisies[]){

  for (int i = 0; i <= sizeArray; i++){

    while (somme >= pieces[i]){

      //printf("\n%d ",somme);
      somme -= pieces[i];

      //printf("- %d: %d", pieces[i],somme);
      choisies[i] = 1;
    }

    if (choisies[i] != 1){

      choisies[i] = 0;

    }
  }

  printf("\n");
  for (int i = 0; i < sizeArray; i++)
  {
    printf("%d, ", choisies[i]);
  }
}

int main ()
{
  int pieces[] = {500,200,100,50,20,10,5,2,1};
  int somme = 780;

  int sizeArray = sizeof(pieces)/sizeof(pieces[0]);
  printf("%d\n", sizeArray);
  int choisies[sizeArray];

  choisies[sizeArray] = choisies[0]*sizeArray;

  
  gimmeMyMoneyBack(somme, pieces, sizeArray, choisies);
 
  return 0;
}