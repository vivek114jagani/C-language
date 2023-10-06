#include <stdio.h>

// Function to calculate the area of a triangle
float triangle_area(float base, float height) {
    float area = 0.5 * base * height;
    return area;
}

int main() {
    float base, height, area;

    // Prompt the user to input the base and height of the triangle
    printf("Enter the base of the triangle: ");
    scanf("%f", &base);
    printf("Enter the height of the triangle: ");
    scanf("%f", &height);

    // Call the triangle_area function to calculate the area of the triangle
    area = triangle_area(base, height);

    // Print the area of the triangle
    printf("The area of the triangle is: %.2f", area);

    return 0;
}
