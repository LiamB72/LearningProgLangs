#include <iostream>
#include <ctime>

using string = std::string;

int main(){
    
    srand(time(NULL));

    int answer, guesses, guess, diff;

    std::cout << "Enter a number within a reach superior to 1 : ";
    std::cin >> diff;

    answer = (rand() % diff) + 1;

    do{
        std::cout << "\nEnter a number between 1 and " << diff << " : ";
        std::cin >> guess;
        guesses++;

        if (guess < answer){
            std::cout << "\nNumber guessed is too low!";
        } else if (guess > answer){
            std::cout << "\nNumber guessed is too high!";
        } else {
            std::cout << "\nCongrats! You win! " << "|| You have taken " << guesses << " guess(es)!";
        }
    } while (guess != answer);

    return 0;
}