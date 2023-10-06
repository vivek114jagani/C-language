#include <stdio.h>

int main()
{
    float celsius, fahrenheit, kelvin;

    printf("Enter tem in celsius : ");
    scanf("%f", &celsius);

    fahrenheit = (1.8 * celsius) + 32;
    printf("\nTemp in fahrenheit : %.2f", fahrenheit);

    kelvin = celsius + 273.15;
    printf("\nTemp in kelvin : %.2f", kelvin);
}