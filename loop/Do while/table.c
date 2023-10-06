#include <stdio.h>

int main()
{
    int a, i = 1;

    printf("Enter the nuuber : ");
    scanf("%d", &a);

    do
    {
        printf("%d * %d = %d\n", a, i, a * i);
        i++;
    } while (i <= 10);
}