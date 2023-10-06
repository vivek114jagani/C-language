#include <stdio.h>

int main()
{
    int n, i = 10;

    printf("Enter the number : ");
    scanf("%d", &n);

    do
    {
        printf("%d\n", i);
        i--;
    } while (i >= n);
}