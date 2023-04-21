#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    srand(time(0));

    //int number1 = rand(); //0 -> 32,767; if deserved to be lowered : (rand() % n) + 1 <- cuz the pc starts by 0
                          //             (with n being the max value of the random)

    for (int i = 0; i < 6; i++)
    {
        int number1 = (rand() % 6) + 1;
        printf("%d\n",number1);
    }
    
    return 0;
}