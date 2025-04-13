#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

#define ALPHABET_SIZE 26
#define ASCII_OFFSET 65

int main() {

    char person1[50], person2[50];
    int age1, age2;
    int min = 0;
    char selected[min + 1];
    strncpy(selected, person1, min);
    selected[min] = '\0';
    int max = strlen(selected);
    float chances;

    srand(time(NULL)); 
    char alphabet[ALPHABET_SIZE] = "abcdefghijklmnopqrstuvwxyz";

    int random_index = rand() % ALPHABET_SIZE;
    char random_char1 = alphabet[random_index];

    int random_number = (rand() % (max - min + 1)) + min;

    // printf("Random alphabet: %c\n", random_char1);


    printf("What's your name?: \n");
    fgets(person1, sizeof(person1), stdin);  
    printf("What's your partner's name?: \n");
    fgets(person2, sizeof(person2), stdin);  

    printf("What's your age?: \n");
    scanf("%d", &age1);
    printf("What's your partner's age?: \n");
    scanf("%d", &age2);

    if (age1 > 18 && age2 > 18 && abs(age1 - age2) <= 10) {  
        chances = ((float)age1 / (age1 + age2)) * 100;

        if (person1[0] == random_char1 || person2[0] == random_char1) {
            chances += ((age1 + age2) / (float)age1) * 100;

            if (person1[random_number] == random_char1 || person2[random_number] == random_char1)
            {
                chances += 20;
            }
            
        } else {
            chances;
        }      
    } else {
        chances = 0;
        printf("IMMORALITY DETECTED!! \n");
    }
    
    printf("The chances of %s and %s getting married is %.2f%%\n", person1, person2, chances);

    return 0;
}