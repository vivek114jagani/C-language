#include <stdio.h>

int main()
{
    int a[20][20], b[20][20], c[20][20], r1, r2, c1, c2, i, j, k;

    printf("Enter array A row and column size : \n");
    scanf("%d %d", &r1, &c1);

    printf("Enter array B row and column size : \n");
    scanf("%d %d", &r2, &c2);

    while (c1 != r2)
    {
        printf("Error !!! new row and column vales insert : \n");
        printf("===============================================\n");

        printf("Enter array A row and column size : \n");
        scanf("%d %d", &r1, &c1);

        printf("Enter array B row and column size : \n");
        scanf("%d %d", &r2, &c2);
    }

    printf("\nEnter the array A elements : \n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter the array B elements : \n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("\n==========================\n");
    printf("Array A in matrix : \n");
    printf("==========================\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("\n==========================\n");
    printf("Array b in matrix : \n");
    printf("==========================\n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    printf("\n===================================\n");
    printf("Array A and B multiplication : \n");
    printf("===================================\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < r2; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}