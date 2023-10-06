#include <stdio.h>

int main()
{
    int n, a = 0, b, r, i;

    printf("Enter the number : ");
    scanf("%d", &n);

    b = n;
    for (a = 0; n > 0; i++)
    {
        r = n % 10;
        a = (r * r * r) + a;
        n /= 10;
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