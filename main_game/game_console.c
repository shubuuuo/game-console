#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>
#include <windows.h> 

void snake_water_gun();
int getRandomNumber();
void guess_the_number();
void kbc();
void rock_paper_scissors();
void tic_tac_toe();
int hangman();
void dino();
void pacman();
 
// Main Funtion to choose which game to play
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

// Function to implement Snake Water Gun
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

// Funtion to get random number
int getRandomNumber()
{
    int min = 1;
    int max = 3;
    srand(time(NULL));
    return (rand() % (max - min + 1)) + min;
}

// Funtion to implement guess the number
void guess_the_number() {
    int target, guess, attempts = 0;
    
    // Seed the random number generator
    srand(time(0));
    target = rand() % 100 + 1; // Generates a number between 1 and 100

    printf("Welcome to the Guess the Number game!\n");
    printf("I have selected a number between 1 and 100. Try to guess it!\n");

    // Loop until the correct guess
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > target) {
            printf("Too high! Try again.\n");
        } else if (guess < target) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
        }

    } while (guess != target);
}

// Funtion to implent Kaun Banega Crorepati(KBC) game
void kbc() {
    int choice, prize = 0;
    
    printf("Welcome to Kaun Banega Crorepati!\n");
    printf("Answer the following questions correctly to win the prize money!\n\n");

    // Question 1
    printf("Q1: What is the capital of India?\n");
    printf("1) Mumbai\n2) New Delhi\n3) Kolkata\n4) Chennai\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    if (choice == 2) {
        prize = 1000;
        printf("Correct! You have won ₹%d\n\n", prize);
    } else {
        printf("Wrong answer! You lost the game.\n");
        return;
    }

    // Question 2
    printf("Q2: What is the national animal of India?\n");
    printf("1) Lion\n2) Tiger\n3) Elephant\n4) Peacock\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    if (choice == 2) {
        prize = 5000;
        printf("Correct! You have won ₹%d\n\n", prize);
    } else {
        printf("Wrong answer! You lost the game.\n");
        return;
    }

    // Question 3
    printf("Q3: Who wrote the Indian National Anthem?\n");
    printf("1) Rabindranath Tagore\n2) Mahatma Gandhi\n3) Subhash Chandra Bose\n4) Jawaharlal Nehru\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    if (choice == 1) {
        prize = 10000;
        printf("Correct! You have won ₹%d\n\n", prize);
    } else {
        printf("Wrong answer! You lost the game.\n");
        return;
    }

    // Question 4
    printf("Q4: Which is the largest planet in our Solar System?\n");
    printf("1) Earth\n2) Jupiter\n3) Mars\n4) Saturn\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    if (choice == 2) {
        prize = 50000;
        printf("Correct! You have won ₹%d\n\n", prize);
    } else {
        printf("Wrong answer! You lost the game.\n");
        return;
    }

    printf("Congratulations! You completed the KBC game and won ₹%d!\n", prize);
}

// Funtion to implement rock paper scizzors
void rock_paper_scissors() {
    int user_choice, computer_choice;
    
    // Seed the random number generator
    srand(time(0));

    printf("Welcome to Rock, Paper, Scissors!\n");
    printf("1) Rock\n2) Paper\n3) Scissors\n");
    
    // Take user's choice
    printf("Enter your choice (1-3): ");
    scanf("%d", &user_choice);

    // Validate user input
    if (user_choice < 1 || user_choice > 3) {
        printf("Invalid choice! Please enter 1, 2, or 3.\n");
        return;
    }

    // Generate computer's choice (1 to 3)
    computer_choice = rand() % 3 + 1;

    // Display choices
    char *choices[] = {"Rock", "Paper", "Scissors"};
    printf("You chose: %s\n", choices[user_choice - 1]);
    printf("Computer chose: %s\n", choices[computer_choice - 1]);

    // Determine the winner
    if (user_choice == computer_choice) {
        printf("It's a draw!\n");
    } else if ((user_choice == 1 && computer_choice == 3) ||  // Rock beats Scissors
               (user_choice == 2 && computer_choice == 1) ||  // Paper beats Rock
               (user_choice == 3 && computer_choice == 2)) {  // Scissors beats Paper
        printf("Congratulations! You win!\n");
    } else {
        printf("You lost! Better luck next time.\n");
    }
}
char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
int player = 1; // Player 1 starts
int choice;
char mark;

// Function to display the Tic-Tac-Toe board
void display_board() {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %c ", board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("---+---+---\n");
    }
    printf("\n");
}

// Function to check if there is a winner
int check_winner() {
    for (int i = 0; i < 3; i++) {
        // Check rows and columns
        if ((board[i][0] == board[i][1] && board[i][1] == board[i][2]) ||
            (board[0][i] == board[1][i] && board[1][i] == board[2][i])) {
            return 1;
        }
    }
    // Check diagonals
    if ((board[0][0] == board[1][1] && board[1][1] == board[2][2]) ||
        (board[0][2] == board[1][1] && board[1][1] == board[2][0])) {
        return 1;
    }
    return 0;
}

// Function to check if the board is full (draw condition)
int check_draw() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] >= '1' && board[i][j] <= '9') {
                return 0; // Space still available
            }
        }
    }
    return 1; // No spaces left, game is a draw
}

// Function to play Tic-Tac-Toe
void tic_tac_toe() {
    int game_over = 0;

    printf("Welcome to Tic-Tac-Toe!\n");
    display_board();

    while (!game_over) {
        // Switch between player 1 (X) and player 2 (O)
        player = (player % 2) ? 1 : 2;
        mark = (player == 1) ? 'X' : 'O';

        printf("Player %d, enter a position (1-9): ", player);
        scanf("%d", &choice);

        // Update the board
        int row = (choice - 1) / 3;
        int col = (choice - 1) % 3;

        if (choice >= 1 && choice <= 9 && board[row][col] == (choice + '0')) {
            board[row][col] = mark;
        } else {
            printf("Invalid move! Try again.\n");
            player--; // Revert player turn
        }

        display_board();

        // Check for a winner
        if (check_winner()) {
            printf("Player %d wins!\n", player);
            game_over = 1;
        } else if (check_draw()) {
            printf("It's a draw!\n");
            game_over = 1;
        }

        player++; // Switch turn
    }
}

#define MAX_ATTEMPTS 6
#define WORD_LENGTH 20

// Function to play Hangman
int hangman() {
    char word[] = "programming"; // Change this word to customize
    int word_len = strlen(word);
    char guessed[word_len]; // Store guessed letters
    int attempts = MAX_ATTEMPTS;
    int correct_guesses = 0;
    char guessed_letter;
    int i, found;

    // Initialize the guessed word display
    for (i = 0; i < word_len; i++) {
        guessed[i] = '_';
    }
    guessed[word_len] = '\0';

    printf("Welcome to Hangman!\n");

    // Main game loop
    while (attempts > 0 && correct_guesses < word_len) {
        printf("\nWord: %s\n", guessed);
        printf("Attempts left: %d\n", attempts);
        printf("Guess a letter: ");
        scanf(" %c", &guessed_letter);
        guessed_letter = tolower(guessed_letter); // Convert to lowercase

        // Check if the guessed letter is in the word
        found = 0;
        for (i = 0; i < word_len; i++) {
            if (word[i] == guessed_letter && guessed[i] == '_') {
                guessed[i] = guessed_letter;
                correct_guesses++;
                found = 1;
            }
        }

        // If the guessed letter was incorrect
        if (!found) {
            attempts--;
            printf("Wrong guess! You have %d attempts left.\n", attempts);
        }

        // Check if the player won
        if (correct_guesses == word_len) {
            printf("\nCongratulations! You guessed the word: %s\n", word);
            return 1; // Win
        }
    }

    // If the player runs out of attempts
    printf("\nGame Over! The word was: %s\n", word);
    return 0; // Lose
}

#define GROUND_LENGTH 30

// Function to play Dino Game
void dino() {
    int position = 0;    // Dino position (0 = ground, 1 = jumping)
    int obstacle = GROUND_LENGTH - 5; // Initial obstacle position
    int score = 0;
    char ground[GROUND_LENGTH + 1];
    
    srand(time(NULL)); // Seed for random obstacles

    printf("Welcome to Dino Run! Press 'j' to jump. Avoid the obstacles!\n");

    while (1) {
        // Clear ground
        for (int i = 0; i < GROUND_LENGTH; i++) {
            ground[i] = ' ';
        }
        ground[GROUND_LENGTH] = '\0';

        // Place obstacle randomly
        if (obstacle <= 0) {
            if (rand() % 5 == 0) { // Random chance of an obstacle appearing
                obstacle = GROUND_LENGTH - 5;
            }
        } else {
            obstacle--;
        }

        ground[obstacle] = 'O'; // Set obstacle
        
        // Move Dino
        if (_kbhit()) { // Check for key press
            char ch = _getch();
            if (ch == 'j' || ch == 'J') {
                position = 1; // Dino jumps
            }
        }

        // Display Dino's position
        if (position == 1) {
            printf("    D\n");
            position = 0; // Dino comes back down
        } else {
            printf("\n");
        }

        // Print ground with obstacle
        printf("%s\n", ground);

        // Check for collision
        if (position == 0 && ground[4] == 'O') {
            printf("Game Over! Score: %d\n", score);
            break;
        }

        score++; // Increase score
        _sleep(200); // Delay to control game speed
    }
}

#define WIDTH 10
#define HEIGHT 5

char grid[HEIGHT][WIDTH] = {
    {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
    {'#', '.', '.', '.', '.', '.', '.', '.', '.', '#'},
    {'#', '.', '#', '#', '.', '#', '#', '.', '.', '#'},
    {'#', '.', '.', '.', 'P', '.', '.', '.', '.', '#'},
    {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'}
};

int pacman_x = 3, pacman_y = 4;
int dots_left = 8; // Number of dots to eat

void displayGrid() {
    system("cls"); // Clear the screen
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            printf("%c ", grid[i][j]);
        }
        printf("\n");
    }
}

void pacman() {
    char move;
    printf("Welcome to Pac-Man! Use W A S D to move. Eat all dots!\n");

    while (dots_left > 0) {
        displayGrid();

        if (_kbhit()) {
            move = _getch();
            int new_x = pacman_x, new_y = pacman_y;

            // Move based on input
            if (move == 'w' || move == 'W') new_x--;
            if (move == 's' || move == 'S') new_x++;
            if (move == 'a' || move == 'A') new_y--;
            if (move == 'd' || move == 'D') new_y++;

            // Check if the move is valid
            if (grid[new_x][new_y] != '#') {
                // If Pac-Man eats a dot
                if (grid[new_x][new_y] == '.') {
                    dots_left--;
                }
                // Move Pac-Man
                grid[pacman_x][pacman_y] = ' ';
                pacman_x = new_x;
                pacman_y = new_y;
                grid[pacman_x][pacman_y] = 'P';
            }
        }

        Sleep(150); // Control speed
    }

    printf("\nCongratulations! You ate all the dots! 🎉\n");
}
