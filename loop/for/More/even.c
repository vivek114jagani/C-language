#include <stdio.h>
int main()
{
    int n, i;

    printf("Enter the number : ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d is even number\n", i);
        }
    }
}