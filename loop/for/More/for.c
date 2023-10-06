#include <stdio.h>

int main()
{
    int n, i = 1;

    printf("Enter the number : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }
}