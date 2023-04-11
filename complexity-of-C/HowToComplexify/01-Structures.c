#include <stdio.h>
#include <string.h>


struct Player
{
    char name[15];
    int score;
};


int main(){
    
    char namePlayer1[15];
    char namePlayer2[15];

    printf("\nWhat will be the name of the player 1 : "); //Print the question Player 1
    fgets(namePlayer1, 15, stdin);                        //Get the User Input Player 1
    namePlayer1[strlen(namePlayer1)-1] = '\0';            //Remove the new line 

    //Player User Input
    printf("\nWhat will be the name of the player 2 : "); //Print the question Player 2
    fgets(namePlayer2, 15, stdin);                        //Get the User Input Player 2
    namePlayer2[strlen(namePlayer2)-1] = '\0';            //Remove the new line

    struct Player player1;                                //Create variable for player1 with the struct of Player
    struct Player player2;                                //Create variable for player2 with the struct of Player
    
    strcpy(player1.name, namePlayer1);                    //Replace the value of name[15] by the user input for p1
    strcpy(player2.name, namePlayer2);                    //Replace the value of name[15] by the user input for p2

    printf("\nPlayer 1 : %s || Player 2 : %s", player1.name, player2.name);
    //Print both of the players' name.
    return 0;
}