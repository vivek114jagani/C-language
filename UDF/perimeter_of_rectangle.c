#include <stdio.h>

// Function to calculate the perimeter of a rectangle
double rectangle_perimeter(double length, double width)
{
    double perimeter = 2 * (length + width);
    return perimeter;
}

int main()
{
    double length, width, perimeter;

    printf("Enter the length of the rectangle: ");
    scanf("%lf", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%lf", &width);

    // Call the rectangle_perimeter() function to calculate the perimeter of the rectangle
    perimeter = rectangle_perimeter(length, width);

    printf("The perimeter of the rectangle is: %lf\n", perimeter);
}
