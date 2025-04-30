#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {

    double choose, simple, compound, principal, rateOfInterest, time, amount, numberOfTimes;
    printf("Type 1 if you wanna calculate Simple Interest & 0 for Compound Interest. \n");
    scanf("%lf", &choose);

    if (choose == 1)
    {
    printf("We are going to calculate Simple Interest here.\n");
        // To Calculate Simple Interest
        printf("Enter the value of Principal Amount(Initial Investment) here: \n");
        scanf("%lf", &principal);
        printf("Enter the value of Rate Of Interest here: \n");
        scanf("%lf", &rateOfInterest);
        printf("Enter the value of Time(in years) that money is invested for here: \n");
        scanf("%lf", &time);

        simple = principal * rateOfInterest * time;

        printf("The Value of Simple Interest is Rs. %.4lf", simple);
    } 
    else {
    printf("We are going to calculate Compound Interest here.\n");
        // To Calculate Compound Interest
        printf("Enter the value of Principal Amount(Initial Investment) here: \n");
        scanf("%lf", &principal);
        printf("Enter the value of Rate Of Interest(in decimal) here: \n");
        scanf("%lf", &rateOfInterest);
        printf("Enter the number of times that interest is compounded per year here: \n");
        scanf("%lf", &numberOfTimes);
        printf("Enter the value of Time(in years) that money is invested for here: \n");
        scanf("%lf", &time);

        amount = principal * pow((1 + (rateOfInterest/numberOfTimes)), (numberOfTimes * time));

        compound = amount - principal;

        printf("The Value of Compound Interest is Rs. %.4lf", compound);
    }

    return 0;
}