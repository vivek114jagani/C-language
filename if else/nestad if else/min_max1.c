#include <stdio.h>

int main()
{
    int a, b, c;

    printf("A : ");
    scanf("%d", &a);

    printf("B : ");
    scanf("%d", &b);

    printf("C : ");
    scanf("%d", &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("A is max");
        }
        else
        {
            printf("C is max");
        }
    }
    else
    {
        if (b > c)
        {
            printf("B is max");
        }
        else
        {
            printf("C is max");
        }
    }
}