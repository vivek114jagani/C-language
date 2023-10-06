// 5
// 5 4
// 5 4 3
// 5 4 3 2
// 5 4 3 2 1
#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter the number : ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--)
    {
        for (j = n; j >= i; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}