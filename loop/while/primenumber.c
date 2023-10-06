#include <stdio.h>

int main()
{
    int n, i = 2;

    printf("Enter the number : ");
    scanf("%d", &n);

    while (i <= n - 1)
    {
        if (n % i == 0)
        {
            printf("The number is not prime.");
            break;
        }
        i++;
    }
    if (i == n)
        printf("The number is prime.");
}