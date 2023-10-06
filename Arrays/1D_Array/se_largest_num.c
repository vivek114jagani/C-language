#include <stdio.h>

int main()
{
    int a[50], n, i, j, b;

    printf("Enter size of array : \n");
    scanf("%d", &n);

    printf("Enter array a elements : \n");
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
    printf("seconde largest number is : %d", a[1]);
}