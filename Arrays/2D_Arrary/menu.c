#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], c[10][10], r1, r2, c1, c2, n, i, j, k;

    printf("Enter array A row and column size : \n");
    scanf("%d %d", &r1, &c1);

    printf("Enter array B row and column size : \n");
    scanf("%d %d", &r2, &c2);

    printf("\nEnter the array A elements : \n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter the array B elements : \n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("b[%d][%d] = ", i, j);
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

    printf("\t*************************************");
    printf("\n\t\t==>> 1 for addition");
    printf("\n\t\t==>> 2 for subtraction");
    printf("\n\t\t==>> 3 for multiplication");
    printf("\n\t\t==>> 4 for transpose");
    printf("\n\t\t==>> 5 for exit");
    printf("\n\t*************************************");
    printf("\nEnter Operator (+, -, *, t) : ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("\n==========================================\n");
        printf("addition of tow array in matrix form is : \n");
        printf("==========================================\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                c[i][j] = a[i][j] + b[i][j];
                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }
        break;

    case 2:
        printf("\n============================================\n");
        printf("subtraction of tow array in matrix form is : \n");
        printf("============================================\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                c[i][j] = a[i][j] - b[i][j];
                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }
        break;

    case 3:
        if (n == 3)
        {
            while (c1 != r2)
            {
                printf("Error !!! new row and column values insert : \n");
                printf("===============================================\n");

                printf("Enter array A row and column size : \n");
                scanf("%d %d", &r1, &c1);

                printf("Enter array B row and column size : \n");
                scanf("%d %d", &r2, &c2);
            }
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
        break;

    case 4:
        printf("\n==========================\n");
        printf("Array A in matrix : \n");
        printf("==========================\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                printf("%d\t", a[j][i]);
            }
            printf("\n");
        }
        break;

    case 5:
        printf("exit");
        break;

    default:
        printf("error: unknown operator\n");
        break;
    }
}
