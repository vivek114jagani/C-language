#include <stdio.h>

int main()
{
    int a[50];
    int i, j, b, n;

    printf("Enter array a size : \n");
    scanf("%d", &n);

    printf("Enter araay a elements : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                b = a[i];
                a[i] = a[j];
                a[j] = b;
            }
        }
    }
    printf("descending order in array a is : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}