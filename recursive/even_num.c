#include <stdio.h>

int even(int n)
{
    return 2 * n;
}

int main()
{
    int a, i;

    printf("Enter the number : \n");
    scanf("%d", &a);

    printf("Even numbers : \n");
    for (i = 1; i < a; i++)
    {
        printf("%d\n", even(i));
    }
}