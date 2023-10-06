#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter the number : ");
    scanf("%d", &n);

    i = n;
    do
    {
        if (i % 2 == 0)
        {
            printf("%d is even number\n", i);
        }
        i++;

    } while (i <= n);
}