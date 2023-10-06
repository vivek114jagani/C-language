#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter the number : ");
    scanf("%d", &n);

    i = n;

    while (i <= n)
    {
        if (i % 2 == 1)
        {
            printf("%d is odd number\n", i);
        }
        i++;
    }
}