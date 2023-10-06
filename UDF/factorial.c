// no arguments but returns a value
#include <stdio.h>

int vivek();

int vivek()
{
    int f = 1, i, n;

    printf("Enter the number : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}
int main()
{
    printf("factorial is %d\n", vivek());

    return 0;
}