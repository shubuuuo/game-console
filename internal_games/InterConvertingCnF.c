#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {

    double choose, celsius, fahrenheit;
    printf("Type 1 if you wanna convert Celsius to Fahrenheit & 0 for vice versa. \n");
    scanf("%lf", &choose);

    if (choose == 1)
    {
    printf("We are going to convert Celsius to Fahrenheit here.\n");
        // To convert Celsius to Fahrenheit
        printf("Enter the value of Celsius here: \n");
        scanf("%lf", &celsius);

        fahrenheit = ((9.0/5.0) * celsius) + 32.0;

        printf("The Value of Fahrenheit is %.4lf F", fahrenheit);
    } 
    else {
    printf("We are going to convert Fahrenheit to Celsius here.\n");
        // To convert Fahrenheit to Celsius
        printf("Enter the value of Fahrenheit here: \n");
        scanf("%lf", &fahrenheit);

        celsius = (fahrenheit - 32.0) * (5.0/9.0);

        printf("The Value of Celsius is %.4lf C", celsius);
    }

    return 0;
}