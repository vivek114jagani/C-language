#include <stdio.h>

// Function to calculate the area of a rectangle
double rectangle_area(double length, double width)
{
    double area = length * width;
    return area;
}

int main()
{
    double length, width, area;

    printf("Enter the length of the rectangle: ");
    scanf("%lf", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%lf", &width);

    // Call the rectangle_area() function to calculate the area of the rectangle
    area = rectangle_area(length, width);

    printf("The area of the rectangle is: %lf\n", area);
}
