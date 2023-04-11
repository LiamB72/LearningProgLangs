#include <stdio.h>
#include <stdbool.h>

int main(){

    int temp = 25;
    bool sunny = true;

    if (temp >= 0 && sunny|| temp <= 30 && sunny){
        printf("\nThe Weather's looking pretty good today!");
    } else {
        printf("\nThe Weather's looking pretty bad today!");
    }
    return 0;
}