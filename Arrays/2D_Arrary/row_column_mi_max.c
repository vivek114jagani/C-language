#include <stdio.h>

int main()
{
    int n, i, j, min, max, a[20][20];

    printf("ENter the array a size : \n");
    scanf("%d", &n);

    printf("ENter array a elements : \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("array a in matrix format : \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("row minimum and maximun number is here : \n");
    for (i = 0; i < n; i++)
    {
        min = a[i][0];
        for (j = 0; j < n; j++)
        {
            if (min > a[i][j])
            {
                min = a[i][j];
            }
        }
        printf("row %d ==>> min %d\n", i, min);
    }
    printf("=-=-=-=-=-=-=-=-=-=-\n");

    for (i = 0; i < n; i++)
    {
        max = a[i][0];
        for (j = 0; j < n; j++)
        {
            if (max < a[i][j])
            {
                max = a[i][j];
            }
        }
        printf("row %d ==>> max %d\n", i, max);
    }

    printf("==================================================\n");
    printf("column minimum and maximun number is here : \n");
    for (i = 0; i < n; i++)
    {
        min = a[0][i];
        for (j = 0; j < n; j++)
        {
            if (min > a[j][i])
            {
                min = a[j][i];
            }
        }
        printf("column %d ==>> min %d\n", i, min);
    }
    printf("=-=-=-=-=-=-=-=-=-=-=-\n");

    for (i = 0; i < n; i++)
    {
        max = a[0][i];
        for (j = 0; j < n; j++)
        {
            if (max < a[j][i])
            {
                max = a[j][i];
            }
        }
        printf("column %d ==>> max %d\n", i, max);
    }
}