#include<stdio.h>
#include<math.h>
#include<time.h>

// Function Prototype
void good_morning();
void good_afternoon();
void good_night();
void good_evening();

int main() {

    int h, m, s;
    printf("Enter Current time.\n");

    printf("Enter Current hour: \n");
    scanf("%d", &h);
    printf("Enter Current minute: \n");
    scanf("%d", &m);
    printf("Enter Current second: \n");
    scanf("%d", &s);

    if (h >= 19 || h <= 4) {
        good_night();
    } else if (h > 4 && h <= 12) {
        good_morning();
    } else if (h > 12 && h <= 17) {
        good_afternoon();
    } else if (h > 17 && h < 19) {
        good_evening();
    }
    
    return 0;
}

void good_morning() {
    printf("A very Good morning!\n");
}
void good_afternoon() {
    printf("A very Good afternoon!\n");
}
void good_night() {
    printf("A very Good night!\n");
}
void good_evening() {
    printf("A very Good evening!\n");
}