#include <stdio.h>

int odd(int n)
{
    return 2 * n + 1;
}

int main()
{
    int a, i;

    printf("Enter the number : \n");
    scanf("%d", &a);

    printf("Odd numbers : \n");
    for (i = 0; i < a; i++)
    {
        printf("%d\n", odd(i));
    }
}