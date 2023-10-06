#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int isPrime(int n)
{
    if (n <= 1)
    {
        return 0;
    }

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

// Function to check if a number is Armstrong
int isArmstrong(int n)
{
    int sum = 0, digit, temp = n;

    while (temp != 0)
    {
        digit = temp % 10;
        sum += pow(digit, 3);
        temp /= 10;
    }

    return sum == n;
}

// Function to check if a number is Perfect
int isPerfect(int n)
{
    int sum = 0;

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }

    return sum == n;
}

int main()
{
    int n, choice;

    do
    {
        // Display the menu
        printf("\nMenu:\n");
        printf("1. Check if a number is prime\n");
        printf("2. Check if a number is Armstrong\n");
        printf("3. Check if a number is Perfect\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter a number: ");
            scanf("%d", &n);

            if (isPrime(n))
            {
                printf("%d is prime.\n", n);
            }
            else
            {
                printf("%d is not prime.\n", n);
            }

            break;
        case 2:
            printf("Enter a number: ");
            scanf("%d", &n);

            if (isArmstrong(n))
            {
                printf("%d is Armstrong.\n", n);
            }
            else
            {
                printf("%d is not Armstrong.\n", n);
            }

            break;
        case 3:
            printf("Enter a number: ");
            scanf("%d", &n);

            if (isPerfect(n))
            {
                printf("%d is Perfect.\n", n);
            }
            else
            {
                printf("%d is not Perfect.\n", n);
            }

            break;
        case 4:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice.\n");
            break;
        }
    } while (choice != 4);

    return 0;
}
