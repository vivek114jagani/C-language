#include <stdio.h>

int main()
{
    int a[10][10], r, c, i, j, upper = 1, lower = 1;

    printf("Enter the size of row and column : \n");
    scanf("%d %d", &r, &c);

    printf("Enter Array A elements : \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Array A in matrix fomr : \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if ((i <= j) && a[i][j] != 1 && a[j][i] != 0)
                upper = 0;
                
            else if ((i >= j) && a[i][j] != 1 && a[j][i] != 0)
                lower = 0;
        }
    }
    // printf("Array A is %s triangular matrix\n", (upper == 1) ? "upper" : "not upper");
    // printf("Array A is %s triangular matrix\n", (lower == 1) ? "lower" : "not lower");
    if (upper == 1) printf("Array A is upper triangular matrix\n");
    if (lower == 1) printf("Array A is lower triangular matrix");
}