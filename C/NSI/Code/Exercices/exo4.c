#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define nbCar 50		//pas plus de 50 caracteres

void encodage (char phrase[], char phraseCodee[])
{
  char tableCodee[] = { '@', '8', '[', '0', '3', '{', '6', '#', '1', '}', ':', '7', 'W', 'Z','*', '?', 'O', '%', '$', '-', 'V', '^', 'M', '+', '/', 'N' };
  int n;
  for (n = 0; n < strlen(phrase); n++){
      //printf("%d, ",(int)phrase[n]-65);
      phraseCodee[n] = tableCodee[(int)phrase[n]-65];
  }
  phraseCodee[n]=0;
}

void decodage (char phrasedecodee[], char phrase[]){
  char tableCodee[] = { '@', '8', '[', '0', '3', '{', '6', '#', '1', '}', ':', '7', 'W', 'Z','*', '?', 'O', '%', '$', '-', 'V', '^', 'M', '+', '/', 'N' };
  char tableDecodee[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
  
  int n;

  for (n = 0; n < strlen(phrase); n++){
    for (int j = 0; j < tableCodee[n]; j++){
        if (phrase[n] == tableCodee[j]){
          int index = tableDecodee[j]-65;
          phrasedecodee[n] = tableDecodee[index];
      }
    }
  }
  phrasedecodee[n] = 0;
}

int main ()
{
  char answer;
  char phrase[nbCar];
  char phraseCodee[nbCar];
  char phrasedecodee[nbCar];
  
  

  printf("Voulez-vous coder ou decoder une phrase (C/D) : ");
  scanf("%c", &answer);

  printf ("tapez votre phrase sans espaces : ");
  scanf("%s", phrase);
  strupr(phrase);

  if (answer == 'C'){
    encodage(phrase, phraseCodee);
    printf("Votre phrase encodee est : %s\n", phraseCodee);
  } else if (answer == 'D') {
    decodage(phrasedecodee, phrase);
    printf("Votre phrase decodee est : %s\n", phrasedecodee);
  } else {
    printf("caractere insere invalide !");
  }
  return 0;
}