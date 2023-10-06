#include <stdio.h>

// Function to calculate the cube of a number
float cube(float num) {
    float cube = num * num * num;
    return cube;
}

int main() {
    float num, result;

    // Prompt the user to input a number
    printf("Enter a number: ");
    scanf("%f", &num);

    // Call the cube function to calculate the cube of the number
    result = cube(num);

    // Print the result
    printf("The cube of %.2f is %.2f.\n", num, result);

    return 0;
}
