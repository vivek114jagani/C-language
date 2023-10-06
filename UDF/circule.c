#include <stdio.h>

// Function to calculate the diameter of a circle
float circle_diameter(float radius)
{
    float diameter = 2 * radius;
    return diameter;
}

// Function to calculate the circumference of a circle
float circle_circumference(float radius)
{
    float circumference = 2 * 3.14159 * radius;
    return circumference;
}

// Function to calculate the area of a circle
float circle_area(float radius)
{
    float area = 3.14159 * radius * radius;
    return area;
}

int main()
{
    float radius, diameter, circumference, area;

    // Prompt the user to input the radius of the circle
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Call the circle_diameter function to calculate the diameter of the circle
    diameter = circle_diameter(radius);

    // Call the circle_circumference function to calculate the circumference of the circle
    circumference = circle_circumference(radius);

    // Call the circle_area function to calculate the area of the circle
    area = circle_area(radius);

    // Print the diameter, circumference, and area of the circle
    printf("The diameter of the circle is: %.2f\n", diameter);
    printf("The circumference of the circle is: %.2f\n", circumference);
    printf("The area of the circle is: %.2f\n", area);

    return 0;
}
