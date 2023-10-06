#include <stdio.h>

int main()
{
    int a, b, c, d, e;

    printf("A : ");
    scanf("%d", &a);

    printf("B : ");
    scanf("%d", &b);

    printf("C : ");
    scanf("%d", &c);

    printf("D : ");
    scanf("%d", &d);

    printf("E : ");
    scanf("%d", &e);

    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                if (a > e)
                {
                    printf("A is max");
                }
                else
                {
                    printf("E is max");
                }
            }
            else
            {
                if (d > e)
                {
                    printf("D is max");
                }
                else
                {
                    printf("E is max");
                }
            }
        }
        else
        {
            if (c > d)
            {
                if (c > e)
                {
                    printf("C is max");
                }
                else
                {
                    printf("E is max");
                }
            }
            else
            {
                if (d > e)
                {
                    printf("D is max");
                }
                else
                {
                    printf("E is max");
                }
            }
        }
    }
    else
    {
        if (b > c)
        {
            if (b > d)
            {
                if (b > e)
                {
                    printf("B is max");
                }
                else
                {
                    printf("E is max");
                }
            }
            else
            {
                if (d > e)
                {
                    printf("D is max");
                }
                else
                {
                    printf("E is max");
                }
            }
        }
        else
        {
            if (c > d)
            {
                if (c > e)
                {
                    printf("C is max");
                }
                else
                {
                    printf("E is max");
                }
            }
            else
            {
                if (d > e)
                {
                    printf("D is max");
                }
                else
                {
                    printf("E is max");
                }
            }
        }
    }
}
