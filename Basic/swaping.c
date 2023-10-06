#include <stdio.h>

int main()
{
    int a, b;
    printf("ENter the number of a : ");
    scanf("%d", &a);
    printf("ENter the number of b : ");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("a = %d\nb = %d\n", a, b);

    return 0;
}