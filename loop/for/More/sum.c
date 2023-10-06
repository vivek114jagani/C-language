#include <stdio.h>
int main()
{
    int n, i = 1, sum;

    printf("Enter the number : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("sum = %d\n", sum);
}