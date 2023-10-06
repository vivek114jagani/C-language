// 1
// 1 0
// 1 0 1
// 1 0 1 0
// 1 0 1 0 1

#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter the number : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i % 1 == 0 && j % 2 == 0)
            {
                printf("0 ");
            }
            else
            {
                printf("1 ");
            }
        }
        printf("\n");
    }
}