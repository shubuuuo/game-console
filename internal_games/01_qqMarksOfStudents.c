#include<stdio.h>

int main() {

    int marks[5];
    int add;
    char name[20];
    float percentage;

    for (int i = 1; i < 6; i++)
    {
        printf("Enter Marks for Student %d: \n", i);
        scanf("%d", &marks[i]);
    }

    for (int j = 1; j < 6; j++)
    {
        printf("The Marks of Student %d is: %d\n", j, marks[j]);
        // add = marks[j];
    }
        add = marks[1] + marks[2] + marks[3] + marks[4] + marks[5];

    printf("%d\n", add);

    percentage = add/5.0;

    printf("And the percentage of overall class is %.2f percent.", percentage);

    return 0;
}