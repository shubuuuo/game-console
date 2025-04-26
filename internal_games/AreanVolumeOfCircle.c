#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
    printf("We are going to find the area of circle here. \n");

    // For Example, let's do this
    double radius1, radius2, height, area, volume;

    printf("Enter the Value of Radius: \n");
    scanf("%lf", &radius1);
    
    // In Order to find the Area of Circle here.
    area = (M_PI) * pow(radius1, 2);

    printf("The value of the Area of Circle is: %.4lf square units.\n", area);


    printf("We are going to find the Volume of Cylinder here. \n");

    printf("Enter the Value of Radius: \n");
    scanf("%lf", &radius2);
    printf("Enter the Value of Height: \n");
    scanf("%lf", &height);
    
    // In Order to find the Volume of Cylinder here.
    volume = (M_PI) * pow(radius2, 2) * height;

    printf("The value of the Volume of Cylinder is: %.4lf cubic units.\n", volume);

    return 0;
}