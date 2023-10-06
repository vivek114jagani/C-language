#include <stdio.h>

int main()
{
    int a[15][15], i, j, n, min, max;

    printf("Enter array a size : \n");
    scanf("%d", &n);

    printf("Enter array a elements : \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("matrix array  : \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    min = a[0][0];
    max = a[0][0];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] < min)
            {
                min = a[i][j];
            }
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
        }
    }
    printf("minimum number is : %d\n", min);
    printf("maximum number is : %d", max);
}