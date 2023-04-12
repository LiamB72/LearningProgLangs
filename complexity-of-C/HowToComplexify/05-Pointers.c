#include <stdio.h>

int main(){
    
    int age;
    int *pAge = NULL;

    printf("How old are you?");
    scanf("%d", &age);

    pAge = &age;

    printf("Address of age : %p \n", &age);
    printf("value of pAge : %p \n", pAge);
    

    printf("Value of age : %d \n", age);
    printf("Value stored at address : %d \n", *pAge);

    return 0;
}