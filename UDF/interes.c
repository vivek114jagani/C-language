#include <stdio.h>

// Function to calculate simple interest
float calculate_simple_interest(float principle, float rate, float time)
{
    float interest = (principle * rate * time) / 100.0;
    return interest;
}

int main()
{
    float principle, rate, time, interest;

    // Prompt the user to input the principle, rate, and time
    printf("Enter the principle amount: ");
    scanf("%f", &principle);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    printf("Enter the time in years: ");
    scanf("%f", &time);

    // Call the calculate_simple_interest function to calculate the interest
    interest = calculate_simple_interest(principle, rate, time);

    // Print the interest
    printf("The simple interest is: %.2f\n", interest);

    return 0;
}
