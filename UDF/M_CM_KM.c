#include <stdio.h>

// Function to convert centimeters to meters
float cm_to_m(float cm)
{
    float m = cm / 100.0;
    return m;
}

// Function to convert centimeters to kilometers
float cm_to_km(float cm)
{
    float km = cm / 100000.0;
    return km;
}

int main()
{
    float cm, m, km;

    // Prompt the user to input the length in centimeters
    printf("Enter the length in centimeters: ");
    scanf("%f", &cm);

    // Call the cm_to_m function to convert centimeters to meters
    m = cm_to_m(cm);

    // Call the cm_to_km function to convert centimeters to kilometers
    km = cm_to_km(cm);

    // Print the length in meters and kilometers
    printf("%.2f centimeters is equal to %.2f meters and %.2f kilometers.\n", cm, m, km);

    return 0;
}
