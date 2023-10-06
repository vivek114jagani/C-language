#include <stdio.h>

int main()
{
    int a, b, c, d;

    printf("A : ");
    scanf("%d", &a);

    printf("B : ");
    scanf("%d", &b);

    printf("C : ");
    scanf("%d", &c);

    printf("D : ");
    scanf("%d", &d);

    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                printf("A is max");
            }
            else
            {
                printf("D is max");
            }
        }
        else
        {
            if (c > d)
            {
                printf("C is max");
            }
            else
            {
                printf("D is max");
            }
        }
    }
    else
    {
        if (b > c)
        {
            if (b > d)
            {
                printf("B is max");
            }
            else
            {
                printf("D is max");
            }
        }
        else
        {
            if (c > d)
            {
                printf("C is max");
            }
            else
            {
                printf("D is max");
            }
        }
    }
}