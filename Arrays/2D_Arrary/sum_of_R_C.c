#include <stdio.h>

int main()
{
    int a[20][20], n, i, j, rosum, clmsum;

    printf("ENter array A and B size: \n");
    scanf("%d", &n);

    printf("Enter array A element : \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("array A in matrix form : \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("\n===================================================\n");
    printf("row sum is : \n");
    printf("\n");
    for (i = 0; i < n; i++)
    {
        rosum = 0;
        for (j = 0; j < n; j++)
        {
            rosum += a[i][j];
        }
        printf("row %d sum is ==>> %d\n", i, rosum);
        printf("=-=-=-=-=-=-=-=-=-=-=-=-\n");
    }

    printf("\n===================================================\n");
    printf("column sum is : \n");
    printf("\n");
    for (j = 0; j < n; j++)
    {
        clmsum = 0;
        for (i = 0; i < n; i++)
        {
            clmsum += a[i][j];
        }
        printf("column %d sum is ==>> %d\n", j, clmsum);
        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    }
}