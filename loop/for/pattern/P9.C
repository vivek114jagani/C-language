// 5
// 4 4
// 3 3 3
// 2 2 2 2
// 1 1 1 1 1
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
            printf("%d ", i);
        }
        printf("\n");
    }
}