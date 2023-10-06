#include <stdio.h>

int main()
{
    int n, i = 1, a;

    printf("Enter the number : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        a = n * n * n;
    }
    printf("%d", a);
}