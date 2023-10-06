#include <stdio.h>

void main()
{
    int a[10][10], i, j, k, rs[10], cs[10], r, c;
    printf("Enter Row & Column For Matrix : \n");
    scanf("%d %d", &r, &c);
    printf("\nEnter Elements For Matrix :\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter [%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < r; i++)
    {
        rs[i] = 0;
        cs[i] = 0;
        for (j = 0; j < c; j++)
        {
            rs[i] += a[i][j];
            cs[i] += a[j][i];
        }
    }
    printf("\nSum Of Rows & Columns :\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\t%d", rs[i]);
        printf("\n");
    }
    printf("\n");
    for (j = 0; j < c; j++)
    {
        printf("%d\t", cs[j]);
    }
}
