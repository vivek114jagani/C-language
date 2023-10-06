#include <stdio.h>

int main()
{
    int a[10][10], i, j, row, column, flag = 1;

    printf("Enter the array A row and column size : \n");
    scanf("%d %d", &row, &column);

    printf("Enter the array A elements : \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("=============================\n");
    printf("Array A in matrix form : \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            if (a[i][j] != 1 && a[j][i] != 0)
            {
                flag = 0;
                break;
            }
        }
    }
    if (flag == 1)
    {
        printf("Matrix is identity matrix\n");
    }
    else
    {
        printf("Matrix is not identity matrix\n");
    }
}