#include <stdio.h>
#include <string.h>

int main(){
    
    char x = 'X';
    char y = 'Y';

    char temp;

    temp = x;
    x = y;
    y = temp;

    printf("\n%c",x);
    printf("\n%c\n",y);

    char i[15] = "Water";
    char j[15] = "Soda";

    char tempString[15];

    strcpy(tempString, i);
    strcpy(i, j);
    strcpy(j, tempString);

    printf("\n%s",i);
    printf("\n%s\n",j);
    return 0;
}