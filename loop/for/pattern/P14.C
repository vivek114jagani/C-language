//         5
//       4 5
//     3 4 5
//   2 3 4 5
// 1 2 3 4 5
#include <stdio.h>

int main()
{
    int n, i, j, k;

    printf("Enter the numner : ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--)
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