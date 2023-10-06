#include <stdio.h>

int main()
{
    int a = 0, b = 1, c, i, n;

    printf("Enter the number : ");
    scanf("%d", &n);

    c = a + b;
    printf("%d\n%d\n", a, b);

    while (c <= n)
    {
        printf("%d\n", c);
        c = a + b;
        i++;
        a = b;
        b = c;
    }
}