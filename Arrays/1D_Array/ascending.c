#include <stdio.h>

int main()
{
    int a[20];
    int i, j, b, n;

    printf("enter number of elements in an array : \n");
    scanf("%d", &n);

    printf("Enter the elements : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                b = a[i];
                a[i] = a[j];
                a[j] = b;
            }
        }
    }
    printf("The numbers in ascending order is : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}