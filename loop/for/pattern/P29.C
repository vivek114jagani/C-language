//     *
//    *A*
//   *A*A*
//  *A*A*A*
// *A*A*A*A*

#include <stdio.h>

int main()
{
    int y = 1;
    int n, i, j, k;

    printf("Enter the number : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (k = i; k <= n - 1; k++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            // printf("*A ");

            if (y % 2 == 0)
            {
                printf("A ");
                y++;
            }
            else
            {
                printf("* ");
                y++;
            }
        }
        printf("\n");
    }
}