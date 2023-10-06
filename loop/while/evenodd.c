#include <stdio.h>

int main()
{
    int n, i = 1;

    printf("Enter the number : ");
    scanf("%d", &n);

    printf("even numbers : \n");
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            printf("%d is even number\n", i);
        }
        i++;
    }

    printf("odd numbers : \n");
    i = 1;
    while (i <= n)
    {
        if (i % 2 == 1)
        {
            printf("%d is odd number\n", i);
        }
        i++;
    }
}