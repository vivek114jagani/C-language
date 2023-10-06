#include <stdio.h>

int main()
{
    int a;

    printf("Enter the number : ");
    scanf("%d", &a);

    if (a == 1)
    {
        printf("sunday");
    }
    else if (a == 2)
    {
        printf("monday");
    }
    else if (a == 3)
    {
        printf("tuseday");
    }
    else if (a == 4)
    {
        printf("wenusday");
    }
    else if (a == 5)
    {
        printf("thusday");
    }
    else if (a == 6)
    {
        printf("fraiday");
    }
    else if (a == 7)
    {
        printf("saturday");
    }
    else
    {
        printf("error");
    }
}