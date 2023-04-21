#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){

    int temp = 25;
    bool sunny = true;

    (temp >= 0 && sunny|| temp <= 30 && sunny) ? printf("\nThe Weather's looking pretty good today!") : printf("\nThe Weather's looking pretty bad today!");
    return 0;
}