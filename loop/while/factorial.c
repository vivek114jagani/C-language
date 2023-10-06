#include <stdio.h>

int main()
{
    int n, i, f = 1;

    printf("Enter the number : ");
    scanf("%d", &n);

    i = n;
    while (n >= 1)
    {
        f = f * n;
        n--;
    }
    printf("factorial of %d is %d\n", i, f);
    return 0;
}