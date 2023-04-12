#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gameStart(int answer, int guess, int guesses){
    do{

        //Guess ask and get user input
        printf("\nEnter a guess : ");
        scanf("%d", &guess);

        //Game itself
        if (guess < answer){

            printf("Too Low!\n");

        } else if (guess > answer){

            printf("Too Big!\n");

        } else {
            printf("Congrats! You answered correctly!\n");
        }
        guesses ++;

        } while (guess != answer);

    //When the game's done.
    printf("Answer  : %d\n", answer);
    printf("Guesses : %d\n",guesses);
}

int main(){
    const int MIN = 1;
    int MAX;
    int guess;
    int guesses = 0;
    int answer;


    //Uses the time to generate a rnd num.
    srand(time(0));

    printf("\nEnter a Max Value : ");
    scanf("%d", &MAX);

    //Generates a rnd num between MAX and MIN.
    answer = (rand() % MAX) + MIN;

    //Debugging
    printf("The answer is : %d\n", answer);
    printf("The MIN Value : %d\n", MIN);
    printf("The MAX Value : %d\n", MAX);

    gameStart(answer, guess, guesses);

    return 0;
}