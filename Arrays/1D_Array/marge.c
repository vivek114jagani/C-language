#include <stdio.h>

int main()
{
    int a[50], b[50], x, y, i, k, c[100];

    printf("ENter array a size :\n");
    scanf("%d", &x);

    printf("ENter array a elements :\n");
    for (i = 0; i < x; i++)
    {
        scanf("%d", &a[i]);
        c[i] = a[i];
    }
    k = i;
    printf("\nEnter array b size :\n");
    scanf("%d", &y);

    printf("Enter array b elements :\n");
    for (i = 0; i < y; i++)
    {
        scanf("%d", &b[i]);
        c[k] = b[i];
        k++;
    }

    printf("\nThe new array is :\n");
    for (i = 0; i < k; i++)
    {
        printf("%d ", c[i]);
    }
}