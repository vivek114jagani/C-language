#include <stdio.h>

int main()
{
    int a[10], n, i, sum = 0;

    printf("ENter the array A size : \n");
    scanf("%d", &n);

    printf("Enter the elements of array A : \n");
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("sum of even position : \n");
    for (i = 0; i < n; i++)
    {
        if (i % 2 == 1)
        {
            sum += i;
        }
    }
    printf("%d", sum);
}