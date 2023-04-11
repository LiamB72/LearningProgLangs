#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(){

    const int MIN = 1;
    int MAX;

    int guess;
    int guesses;
    int answer;

    //Uses the time to generate a rnd num.
    srand(time(0));

    MAX = (rand() % 500) + MIN;

    //Generates a rnd num between MAX and MIN.
    answer = (rand() % MAX) + MIN;

    //Debugging
    printf("The answer is : %d\n", answer);
    printf("The MIN Value : %d\n", MIN);
    printf("The MAX Value : %d\n", MAX);

    do{

        printf("\nEnter a guess : ");

        scanf("%d", &guess);

        if (guess < answer){

            printf("Too Low!\n");
            guesses+= 1;

        } else if (guess > answer){

            printf("Too Big!\n");
            guesses+= 1;

        }
    }while (guess != answer);
    
    printf("Congrats! You answered correctly!\n");
    printf("The answer was : %d\n", answer);

    return 0;
}