//         1
//       2 1
//     3 2 1
//   4 3 2 1
// 5 4 3 2 1

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
        for (j = i; j >= 1; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}