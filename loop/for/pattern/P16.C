// 0
// 1 0
// 0 1 0
// 1 0 1 0
// 0 1 0 1 0

#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter the number : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = i; j >= 1; j--)
        {
            if (i % 1 == 0 && j % 2 == 0)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
}