#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define nbNotes 12

char matiere[][nbNotes] = {"Ens. Sci.  ",
                           "Hist./Geo. ",
                           "L.V. A     ",
                           "L.V. B     ",
                           "EPS        ",
                           "Ens-Spe 1e ",
                           "Bull. Scol.",
                           "Francais   ",
                           "Philosophie",
                           "Grand Oral ",
                           "Ens. Spe. 1",
                           "Ens. Spe. 2"};
int coefficients[nbNotes]={5,5,5,5,5,5,10,10,8,10,16,16};

float notes[nbNotes]={12,11,13,8,16,12,12.5,9,14,15,11,19};
//float notes[nbNotes];

void moyList(){
  float total = 0.00;
  float moy = 0.00;
  for (int i = 0; i <= nbNotes-1; i++)
  {
    //Debuggin' :
    //printf("(%d * ", notes[i]);
    //printf("%d) +", coefficients[i]);

    total += notes[i]*coefficients[i];
  }
  moy = total/100;

  printf("Le nombre de points total est de %.2f\n", total);
  printf("Votre moyenne est de %.2f\n", moy);
}

void maxList(){
  float max = notes[0];
  for (int i = 0; i < nbNotes; i++)
  {
    if (max < notes[i]){
        max = notes[i];
    }
  }
  printf("La meilleure des notes est de %.2f\n", max);
}

void minList(){
  float min = notes[0];
  for (int i = 0; i < nbNotes; i++)
  {
    if (min > notes[i]){
        min = notes[i];
    }
  }
  printf("La pire des notes est de %.2f\n", min);
}

void printFinal(){
  printf("\nEnseignement :\t\t      Coeff     Notes\t      points\n");
  float total;
  float sum;
  for (int i = 0; i <= nbNotes-1; i++){
    total = notes[i] * coefficients[i];
    sum += notes[i] * coefficients[i];
    printf("%s\t\t\t%d\t%.1f\t\t%.0f\n",matiere[i],coefficients[i],notes[i],total);
  }
  printf("\ntotal\t\t\t\t\t\t\t%.1f",sum);
}

int main ()
{
  printFinal();
 
  return 0;
}