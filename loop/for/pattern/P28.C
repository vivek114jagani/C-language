//        1
//      2 3 2
//    3 4 5 4 3
//  4 5 6 7 6 5 4
// 5 6 7 8 9 8 7 6 5

#include <stdio.h>
int main()
{
    int i, k, n, a = 0, count = 0, count1 = 0;
    printf("Enter the number of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (k = 1; k <= n - i; k++)
        {
            printf("  ");
            ++count;
        }
        while (a != 2 * i - 1)
        {
            if (count <= n - 1)
            {
                printf("%d ", i + a);
                ++count;
            }
            else
            {
                ++count1;
                printf("%d ", (i + a - 2 * count1));
            }
            ++a;
        }
        count1 = count = a = 0;
        printf("\n");
    }
    return 0;
}