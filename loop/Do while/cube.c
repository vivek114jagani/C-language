#include <stdio.h>

int main()
{
    int n, i = 1, a;

    printf("Enter the number : ");
    scanf("%d", &n);

    do
    {
        a = n * n * n;
        printf("%d\n", a);
        i++;
    } while (i <= 1);
}