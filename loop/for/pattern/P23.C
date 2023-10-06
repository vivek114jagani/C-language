// 1
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1
// 4 3 2 1
// 3 2 1
// 2 1
// 1

#include <stdio.h>

int main()
{
    int n, i, j, k;

    printf("Enter the number : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = i; j >= 1; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--)
    {
        for (k = i; k >= 1; k--)
        {
            printf("%d ", k);
        }
        printf("\n");
    }
}