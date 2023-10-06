// 12345
//  2345
//   345
//    45
//     5
#include <stdio.h>

int main()
{
    int n, i, j, k;

    printf("Enter the number : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (k = i - 1; k >= 1; k--)
        {
            printf(" ");
        }
        for (j = i; j <= n; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}