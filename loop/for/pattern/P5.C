// 1 2 3 4 5
// 2 3 4 5
// 3 4 5
// 4 5
// 5
#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter the number : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = i; j <= n; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}