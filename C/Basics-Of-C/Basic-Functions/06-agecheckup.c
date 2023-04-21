#include <stdio.h>
#include <stdbool.h>

int main(){

    int age;
    bool exist = true; //create a bool value which is true

    printf("How old are you? ");
    scanf("%d",&age);

    if (age >= 8 && age < 12 && exist/*Just saying the name of the bool value means if that variable is true*/){
        printf("poussin");
    } else if (age >= 12 && age < 15){
        printf("cadet");
    } else if (age >= 15 && age < 18){
        printf("Adolescent");
    } else if (age >= 18 && age < 100){
        printf("Adulte");
    } else if (age < 8 && age > 0){
        printf("Petit poussin");
    } else {
        printf("Stop messing with that system.");
    }
    
    return 0;
}