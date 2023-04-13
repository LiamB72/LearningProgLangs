#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define nbCar 50		//pas plus de 50 caracteres

void encodage (char phrase[], char phraseCodee[])
{
  char tableCodee[] =
    { '@', '8', '[', '0', '3', '{', '6', '#', '1', '}', ':', '7', 'W', 'Z','*', '?', 'O', '%', '$', '-', 'V', '^', 'M', '+', '/', 'N' };
    int n;
    for (n = 0; n < strlen(phrase); n++){
        phraseCodee[n]=phrase[n];
        printf("%d, ",(int)phrase[n]-65);
    }
    phraseCodee[n]=0;
}


int
main ()
{
  char phrase[nbCar];
  char phraseCodee[nbCar];
  printf ("Votre phrase sans espaces : ");
  scanf("%s", phrase);
  phrase[nbCar] = toupper(phrase[nbCar]);
  printf ("Votre phrase est %s \n", phrase);
  encodage (phrase, phraseCodee);
  printf ("Votre phrase encodee est %s \n", phraseCodee);

  return 0;
}