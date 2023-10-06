#include <stdio.h>

int main()
{
    int n, i, j, k = 0;

    printf("Enter the number : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++, k = 0)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf("  ");
        }
        while (k != 2 * i - 1)
        {
            printf("* ");
            k++;
        }
        printf("\n");
    }
}

/*#include <stdio.h>

int main()
{
    int n, i, j, k;

    printf("Enter the number : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (k = i; k <= n; k++)
        {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}*/