#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int getRandomNumber();

int main()
{

    int guess, i, number;

    printf("Today we are going to play a Number game!\n");
    printf("You will guess the number and we will answer if your guess is correct or not.\n");

    number = getRandomNumber();

    for (i = 0; i < 10; i++)
    {
        printf("Enter your guess: \n");
        scanf("%d", &guess);
        if (guess == number)
        {
            printf("That's Correct! You won!\n");
            break;
        }
        else if (guess > number + 10)
        {
            printf("Nope! That's too Big.\n");
        }
        else if (guess < number - 10)
        {
            printf("Nope! That's too Small.\n");
        }
        else if (guess > number + 5)
        {
            printf("Nope! That's Big, But you are close.\n");
        }
        else if (guess < number - 5)
        {
            printf("Nope! That's Small, But you are close.\n");
        }
        else if (guess > number + 2)
        {
            printf("Nope! That's Big, But you are almost there.\n");
        }
        else if (guess < number - 2)
        {
            printf("Nope! That's Small, But you are almost there.\n");
        }
        else if (guess < number)
        {
            printf("Nope! Still Small.\n");
        }
        else if (guess > number)
        {
            printf("Nope! Still Big.\n");
        }
        else
        {
            printf("Enter a valid Number.");
        }
        if (i == 9)
        {
            printf("Sorry, you've used all attempts. The correct number was %d.\n", number);
        }
    }

    return 0;
}

int getRandomNumber()
{
    int min = 0;
    int max = 100;
    srand(time(NULL));
    int random_number = (rand() % (max - min + 1)) + min;
}