#include <stdio.h>

int main()
{
    int n, i = 1, f = 1;

    printf("Enter the number : ");
    scanf("%d", &n);

    do
    {
        f = f * i;
        i++;
    } while (i <= n);
    printf("factorial of %d is %d\n", n, f);
    return 0;
}