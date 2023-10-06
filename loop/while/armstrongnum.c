#include <stdio.h>

int main()
{
    int n, a = 0, b, r;

    printf("Enter the number : ");
    scanf("%d", &n);

    b = n;
    while (n > 0)
    {
        r = n % 10;
        a = (r * r * r) + a;
        n = n / 10;
    }
    if (b == a)
    {
        printf("armstrong number");
    }
    else
    {
        printf("not armstrong number");
    }
}