#include <stdio.h>

int minmax(int a[], int n)
{
    int min = a[0];
    int max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("minimum number is : %d\n", min);
    printf("maximum number is : %d", max);
}

int main()
{
    int a[50], n, i, min, max;

    printf("Enter array a size : \n");
    scanf("%d", &n);

    printf("Enter array a elements : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    minmax(a, n);
}