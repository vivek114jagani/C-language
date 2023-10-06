#include <stdio.h>

int main()
{
    int n, a = 0, b, r;

    printf("Enter the number : ");
    scanf("%d", &n);

    b = n;
    do
    {
        r = n % 10;
        a = (r * r * r) + a;
        n = n / 10;
    } while (n > 0);
    if (b == a)
    {
        printf("armstrog number");
    }
    else
    {
        printf("not armstrog number");
    }
}