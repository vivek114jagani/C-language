#include <stdio.h>

void main()
{
    int a[10][10];
    int n;

    printf("ENter the number : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            printf("vivek[%d][%d] = %d\n", i, j, a[i][j]);
        }
    }
}