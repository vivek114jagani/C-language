#include <stdio.h>

int main()
{
    int a[15][15], i, j, sum, n;

    printf("Enter array A size : \n");
    scanf("%d", &n);

    printf("ENter array A elements : \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("array with matrix form : \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    sum = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            sum += a[i][j];
        }
    }
    printf("sum of array elements is :==> %d", sum);
}