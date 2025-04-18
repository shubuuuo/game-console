#include <stdio.h>

void halfPyramid(int n);
void fullPyramid(int n);
void invertedPyramid(int n);
void diamond(int n);
void rectangle(int rows, int cols);
void hollowRectangle(int rows, int cols);

int main() {
    int choice, n, rows, cols;

    printf("Welcome to the Construction Tools Program!\n");
    printf("Choose the pattern or shape you want to generate:\n");
    printf("1. Half Pyramid\n");
    printf("2. Full Pyramid\n");
    printf("3. Inverted Pyramid\n");
    printf("4. Diamond\n");
    printf("5. Rectangle\n");
    printf("6. Hollow Rectangle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter the height of the Half Pyramid: ");
            scanf("%d", &n);
            halfPyramid(n);
            break;
        case 2:
            printf("Enter the height of the Full Pyramid: ");
            scanf("%d", &n);
            fullPyramid(n);
            break;
        case 3:
            printf("Enter the height of the Inverted Pyramid: ");
            scanf("%d", &n);
            invertedPyramid(n);
            break;
        case 4:
            printf("Enter the height of the Diamond: ");
            scanf("%d", &n);
            diamond(n);
            break;
        case 5:
            printf("Enter the number of rows and columns for the Rectangle: ");
            scanf("%d %d", &rows, &cols);
            rectangle(rows, cols);
            break;
        case 6:
            printf("Enter the number of rows and columns for the Hollow Rectangle: ");
            scanf("%d %d", &rows, &cols);
            hollowRectangle(rows, cols);
            break;
        default:
            printf("Invalid choice! Please run the program again.\n");
    }

    return 0;
}

// Function to generate a Half Pyramid
void halfPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

// Function to generate a Full Pyramid
void fullPyramid(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        for (int k = 0; k < (2 * i) + 1; k++) {
            printf("*");
        }
        printf("\n");
    }
}

// Function to generate an Inverted Pyramid
void invertedPyramid(int n) {
    for (int i = n; i > 0; i--) {
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        for (int k = 0; k < (2 * i) - 1; k++) {
            printf("*");
        }
        printf("\n");
    }
}

// Function to generate a Diamond
void diamond(int n) {
    // Upper half
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        for (int k = 0; k < (2 * i) + 1; k++) {
            printf("*");
        }
        printf("\n");
    }
    // Lower half
    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        for (int k = 0; k < (2 * i) + 1; k++) {
            printf("*");
        }
        printf("\n");
    }
}

// Function to generate a Rectangle
void rectangle(int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("*");
        }
        printf("\n");
    }
}

// Function to generate a Hollow Rectangle
void hollowRectangle(int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}