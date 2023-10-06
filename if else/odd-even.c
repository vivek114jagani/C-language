#include <stdio.h>

int main()
{
    int number = 0;

    printf("Enter the number : ");
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("%d is even number", number);
    }
    else
    {
        printf("%d is odd number", number);
    }
}