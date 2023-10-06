#include <stdio.h>

int main()
{
    int n, i = 2;

    printf("Enter the number : ");
    scanf("%d", &n);

    do
    {
        if (n % 2 == 0)
        {
            printf("\n %d is not prime number", n);
            scanf("%d", &n);
        }
        i++;
    } while (i < n);
    if (i == n)
        printf("\n %d is prime number", n);
    else
        printf("\n %d is not prime number", n);
}