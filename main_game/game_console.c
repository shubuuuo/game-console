#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


void snake_water_gun();
int getRandomNumber();
void guess_the_number();
void kbc();
void rock_paper_scissors();
void tic_tac_toe();
int hangman();
void dino();
void pacman();
 

int main() {

    char input[20];

    printf("+++++++++++++++++++++++++++++++++++++\n");
    printf("        WELCOME TO GAME CENTER       \n");
    printf("+++++++++++++++++++++++++++++++++++++\n");

    printf("You can Play the following games in this console: \n");
    printf("1. snake water gun [swg] \n");
    printf("2. guess the number [gtn] \n");
    printf("3. kbc [kbc] \n");
    printf("4. rock paper scissors [rps] \n");
    printf("5. tic tac toe [ttt] \n");
    printf("6. hangman [h] \n");
    printf("7. dino [d] \n");
    printf("8. pacman [p] \n");

    printf("Enter the game you want to play or enter it's [id].\n");
    scanf("%s", input);

    printf("You Chose %s\n", input);

    if (strcmp(input, "snake water gun") == 0 || strcmp(input, "swg") == 0 ||
        strcmp(input, "SNAKE WATER GUN") == 0 || strcmp(input, "Snake Water Gun") == 0)
    {
        snake_water_gun();
    }
    else if (strcmp(input, "guess the number") == 0 || strcmp(input, "gtn") == 0 ||
             strcmp(input, "GUESS THE NUMBER") == 0 || strcmp(input, "Guess The Number") == 0)
    {
        guess_the_number();
    }
    else if (strcmp(input, "kbc") == 0 || strcmp(input, "KBC") == 0 || strcmp(input, "Kbc") == 0)
    {
        kbc();
    }
    else if (strcmp(input, "rock paper scissors") == 0 || strcmp(input, "rps") == 0 ||
             strcmp(input, "ROCK PAPER SCISSORS") == 0 || strcmp(input, "Rock Paper Scissors") == 0)
    {
        rock_paper_scissors();
    }
    else if (strcmp(input, "tic tac toe") == 0 || strcmp(input, "ttt") == 0 ||
             strcmp(input, "TIC TAC TOE") == 0 || strcmp(input, "Tic Tac Toe") == 0)
    {
        tic_tac_toe();
    }
    else if (strcmp(input, "hangman") == 0 || strcmp(input, "h") == 0 ||
             strcmp(input, "HANGMAN") == 0 || strcmp(input, "Hangman") == 0)
    {
        hangman();
    }
    else if (strcmp(input, "dino") == 0 || strcmp(input, "d") == 0 ||
             strcmp(input, "DINO") == 0 || strcmp(input, "Dino") == 0)
    {
        dino();
    }
    else if (strcmp(input, "pacman") == 0 || strcmp(input, "p") == 0 ||
             strcmp(input, "PACMAN") == 0 || strcmp(input, "Pacman") == 0)
    {
        pacman();
    }
    else
    {
        printf("Can't get User Input of What he wants to play.\n");
    }

    return 0;
}

void snake_water_gun() {

    char input_one[5], input_two[10];
    int guess, round, comp_input;

    comp_input = getRandomNumber();

    printf("*******************************\n");
    printf("        SNAKE WATER GUN        \n");
    printf("*******************************\n");

    printf("Welcome To Snake Water Gun Game. Enter help(h) if you want to learn how to play this game, if not then enter exit(e).\n");

    scanf("%s", input_one);

    if (strcmp(input_one, "help") == 0 || strcmp(input_one, "h") == 0)
    {
        // Manual
    }
    else if (strcmp(input_one, "exit") == 0 || strcmp(input_one, "e") == 0)
    {
        printf("You are Playing With Computer.\n");
        printf("For How Much Rounds Do you wanna play this game?: \n");
        scanf("%d", &round);
        printf("Enter s or snake.\n");
        printf("Enter w or water.\n");
        printf("Enter g or gun.\n");
        // Need to Give User Option Whether he wants to play with a friend

        do
        {
            round--;
        printf("Enter Your Guess: \n");
        scanf("%s", input_two);

        // For comp_input = 1-water, 2-snake, 3-gun

       if (((strcmp(input_two, "s") == 0 || strcmp(input_two, "snake") == 0) && comp_input == 1) ||
                ((strcmp(input_two, "w") == 0 || strcmp(input_two, "water") == 0) && comp_input == 3) ||
                ((strcmp(input_two, "g") == 0 || strcmp(input_two, "gun") == 0) && comp_input == 2))
            {
                printf("Hooray! You won this round!\n");

            } 
            else if (((strcmp(input_two, "s") == 0 || strcmp(input_two, "snake") == 0) && comp_input == 3) ||
                     ((strcmp(input_two, "w") == 0 || strcmp(input_two, "water") == 0) && comp_input == 2) ||
                     ((strcmp(input_two, "g") == 0 || strcmp(input_two, "gun") == 0) && comp_input == 1))
            {
                printf("Sadly, you lost this round\n");
            } 
            else if (((strcmp(input_two, "s") == 0 || strcmp(input_two, "snake") == 0) && comp_input == 2) ||
                     ((strcmp(input_two, "w") == 0 || strcmp(input_two, "water") == 0) && comp_input == 1) ||
                     ((strcmp(input_two, "g") == 0 || strcmp(input_two, "gun") == 0) && comp_input == 3))
            {
                printf("This round was a tie. No one won.\n");
            } 
        else
        {
            printf("Enter Valid Input to play game.");
        }

        } while (round > 0);
        
        
    }
    else
    {
        printf("Can't Help User with Snake Water Gun Game.\n");
    }

}
int getRandomNumber()
{
    int min = 1;
    int max = 3;
    srand(time(NULL));
    return (rand() % (max - min + 1)) + min;
}
void guess_the_number() {

}
void kbc() {

}
void rock_paper_scissors() {

}
void tic_tac_toe() {

}
int hangman() {
    return 0;
}
void dino() {

}
void pacman() {
    // Implement the game logic for Pacman here
    printf("Pacman game is under construction!\n");
}
