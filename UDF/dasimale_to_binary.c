#include <stdio.h>

int binary(int n)
{
    int rem, b = 0, i = 1;
    while (n != 0)
    {
        rem = n % 2;
        n /= 2;
        b += rem * i;
        i *= 10;
    }
    return b;
}
void main()
{
    int n;
    printf("Enter Number :- ");
    scanf("%d", &n);
    printf("Binary :- %d", binary(n));
}
