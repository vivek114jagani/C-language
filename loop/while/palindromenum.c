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
        a = (a * 10) + r;
        n = n / 10;
    }
    if (b == a)
    {
        printf("palindrom number");
    }
    else
    {
        printf("not palindrom number");
    }
}