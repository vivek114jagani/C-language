#include <stdio.h>

int main()
{
    int a[15][15], b[15][15], c[30][30], temp = 0, n, i, j, k;

    printf("Enter array size : \n");
    scanf("%d", &n);

    printf("ENter ayya A elements : \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("ENter ayya B elements : \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("A martix is : \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("B martix is : \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    printf("New array is : \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i < n)
            {
                temp = c[i][j];
                c[i][j] = a[i][j];
                a[i][j] = b[i][j];
                b[i][j] = c[i][j];
            }
            printf("%d\t", c[i][j]);
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}