#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter the number : ");
    scanf("%d", &n);

    i = n;

    while (i <= n)
    {
        if (i % 2 == 0)
        {
            printf("%d is even number\n", i);
        }
        i++;
    }
}