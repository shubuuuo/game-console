#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void snake_water_gun();
int getRandomNumber();

int main()
{
    char input[20];

    printf("+++++++++++++++++++++++++++++++++++++\n");
    printf("        WELCOME TO GAME CENTER       \n");
    printf("+++++++++++++++++++++++++++++++++++++\n");

    printf("You can Play the following games in this console: \n");
    printf("1. snake water gun [swg] \n");

    printf("Enter if you want to the game [id] or not [no].\n");
    scanf("%s", input);

    printf("You Chose %s\n", input);

    if (strcmp(input, "snake water gun") == 0 || strcmp(input, "swg") == 0 ||
        strcmp(input, "SNAKE WATER GUN") == 0 || strcmp(input, "Snake Water Gun") == 0)
    {
        snake_water_gun();
    }
    else
    {
        printf("Can't get User Input of What he wants to play.\n");
    }

    return 0;
}

void snake_water_gun()
{

    char input_one[5], input_two[10];
    int guess, round, points = 0, comp_input;

    printf("*******************************\n");
    printf("        SNAKE WATER GUN        \n");
    printf("*******************************\n");

    printf("Welcome To Snake Water Gun Game. Enter help(h) if you want to learn how to play this game, if not then enter exit(e).\n");

    scanf("%s", input_one);

    if (strcmp(input_one, "help") == 0 || strcmp(input_one, "h") == 0)
    {
        printf("In Order to play Snake Water Gun, You Will Have to choose between Sanke, Water Or Gun.\n");
        printf("If You chose, Snake and Computer Chose Water then You win.\n");
        printf("If You chose, Water and Computer Chose Gun then You win.\n");
        printf("If You chose, Gun and Computer Chose Snake then You win.\n");
        printf("If You chose, Snake and Computer Chose Gun then You lose.\n");
        printf("If You chose, Water and Computer Chose Snake then You lose.\n");
        printf("If You chose, Gun and Computer Chose Water then You lose.\n");
        printf("If You chose, Snake and Computer also Chose Snake then it's a tie.\n");
        printf("If You chose, Water and Computer also Chose Water then it's a tie.\n");
        printf("If You chose, Gun and Computer also Chose Gun then it's a tie.\n");
        printf("In each round you will get points according to if you won, lost or it was a tie.\n");
        printf("Won: +1 Point.\n");
        printf("Lost: -1 Point.\n");
        printf("Tie: 0 Point.\n");
        printf("THANK YOU!.\n");

        snake_water_gun();
    }
    else if (strcmp(input_one, "exit") == 0 || strcmp(input_one, "e") == 0)
    {
        printf("You are Playing With Computer.\n");
        printf("For How Much Rounds Do you wanna play this game?: \n");
        scanf("%d", &round);
        printf("Enter s or snake.\n");
        printf("Enter w or water.\n");
        printf("Enter g or gun.\n");

        do
        {
            comp_input = getRandomNumber();
            round--;
            printf("Enter Your Guess: \n");
            scanf("%s", input_two);

            // For comp_input = 1-water, 2-snake, 3-gun

            if (((strcmp(input_two, "s") == 0 || strcmp(input_two, "snake") == 0) && comp_input == 1) ||
                ((strcmp(input_two, "w") == 0 || strcmp(input_two, "water") == 0) && comp_input == 3) ||
                ((strcmp(input_two, "g") == 0 || strcmp(input_two, "gun") == 0) && comp_input == 2))
            {
                printf("Hooray! You won this round!\n");
                points++;
            }
            else if (((strcmp(input_two, "s") == 0 || strcmp(input_two, "snake") == 0) && comp_input == 3) ||
                     ((strcmp(input_two, "w") == 0 || strcmp(input_two, "water") == 0) && comp_input == 2) ||
                     ((strcmp(input_two, "g") == 0 || strcmp(input_two, "gun") == 0) && comp_input == 1))
            {
                printf("Sadly, you lost this round\n");
                points--;
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

        printf("You have total %d points.", points);
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
