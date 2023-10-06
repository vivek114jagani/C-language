#include <stdio.h>

int main()
{
    int a[10], n, i, sum = 0;

    printf("Enter the Array A size : \n");
    scanf("%d", &n);

    printf("Enter the elements of Array A : \n");
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("sum of evene numbers : \n");
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 1)
        {
            sum += a[i];
        }
    }
    printf("%d", sum);
}