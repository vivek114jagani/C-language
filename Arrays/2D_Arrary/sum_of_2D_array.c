#include <stdio.h>

int main()
{
    int a[15][15], b[15][15], c[15][15], i, j, n;

    printf("Enter the number : \n");
    scanf("%d", &n);

    printf("Enter array a elements : \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the number : \n");
    scanf("%d", &n);

    printf("Enter array b elements : \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("sum of tow array is : \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}