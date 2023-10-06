#include <stdio.h>

int main()
{
    int a = 0, b = 1, c, i, n;

    printf("Enter the number : ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        printf("%d\n", a);
        c = a + b;
        a = b;
        b = c;
    }
}