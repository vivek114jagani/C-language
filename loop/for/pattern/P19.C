// 5 4 3 2 1
//   5 4 3 2
//     5 4 3
//       5 4
//         5

#include <stdio.h>

int main()
{
    int n, i, j, k;

    printf("Enter the number : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (k = 1; k <= i - 1; k++)
        {
            printf("  ");
        }
        for (j = n; j >= i; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}