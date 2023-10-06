#include <stdio.h>

int main()
{
    int a[10][10], r, c, i, j, idsum, upsum, losum;

    printf("Enter the number of row and column : \n");
    scanf("%d %d", &r, &c);

    printf("Enter array A elements : \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("==========================\n");
    printf("Metrix of array A is : \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    // if (r == c)  // user can use this statement to batter understand to the sum of identity,upper triangular and lower triangular.
    // {
    printf("=============================\n");
    printf("sum of identity matrix is : \n");
    idsum = 0;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (i == j)
            {
                idsum += a[i][j];
            }
        }
    }
    printf("%d\n", idsum);

    printf("=====================================\n");
    printf("sum of upper triangular matrix is : \n");
    upsum = 0;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (i < j) // user can use <= in if statement
            {
                upsum += a[i][j];
            }
        }
    }
    printf("%d\n", upsum);

    printf("=====================================\n");
    printf("sum of lower triangular matrix is : \n");
    losum = 0;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (i > j) // user can use >= in if statement
            {
                losum += a[i][j];
            }
        }
    }
    printf("%d\n", losum);
    // }
}