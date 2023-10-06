#include <stdio.h>

// Function to convert Celsius to Fahrenheit
float celsius_to_fahrenheit(float celsius)
{
    float fahrenheit = (celsius * 9 / 5) + 32;
    return fahrenheit;
}

int main()
{
    float celsius, fahrenheit;

    // Prompt the user to input the temperature in Celsius
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);

    // Call the celsius_to_fahrenheit function to convert Celsius to Fahrenheit
    fahrenheit = celsius_to_fahrenheit(celsius);

    // Print the temperature in Fahrenheit
    printf("%.2f degrees Celsius is equal to %.2f degrees Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}
