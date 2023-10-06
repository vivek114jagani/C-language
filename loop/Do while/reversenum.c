#include <stdio.h>

int main()
{
    int n, r, a = 0;

    printf("Enter the number : ");
    scanf("%d", &n);

    do
    {
        r = n % 10;
        a = (a * 10) + r;
        n = n / 10;
    } while (n > 0);
    printf("Reverce Number : %d", a);

    return 0;
}