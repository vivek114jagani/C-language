//         1
//       1 2
//     1 2 3
//   1 2 3 4
// 1 2 3 4 5
//   2 3 4 5
//     3 4 5
//       4 5
//         5

#include <stdio.h>

int main()
{
    int n, i, j, k;

    printf("Enter the number : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (k = n - 1; k >= i; k--)
        {
            printf("  ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    for (i = 2; i <= n; i++)
    {
        for (k = i - 1; k >= 1; k--)
        {
            printf("  ");
        }
        for (j = i; j <= n; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}