//         5
//       5 4
//     5 4 3
//   5 4 3 2
// 5 4 3 2 1

#include <stdio.h>

int main()
{
    int n, i, j, k;

    printf("Enter the number : ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--)
    {
        for (k = i - 1; k >= 1; k--)
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