#include <stdio.h>

int main()
{
    int n, r;

    printf("Enter the number : ");
    scanf("%d", &n);

    for (r; n > 0; n)
    {
        r = n % 10;
        printf("%d", r);
        n = n / 10;
    }
    return 0;
}