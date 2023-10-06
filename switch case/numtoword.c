#include <stdio.h>

int main()
{
    int a, n = 0, r = 0, b;

    printf("Enter the number : ");
    scanf("%d", &a);

    b = (int)log10(a);

    while (a > 0)
    {
        r = a % 10;
        n = n * 10 + r;
        a = a / 10;
    }
    a = n;
    b = b - ((int)log10(n));
    while (n > 0)
    {
        switch (n % 10)
        {
        case 0:
            printf("zero ");
            break;

        case 1:
            printf("one ");
            break;

        case 2:
            printf("two ");
            break;

        case 3:
            printf("three ");
            break;

        case 4:
            printf("four ");
            break;

        case 5:
            printf("five ");
            break;

        case 6:
            printf("six ");
            break;

        case 7:
            printf("seven ");
            break;

        case 8:
            printf("eight ");
            break;

        case 9:
            printf("nine ");
            break;

        default:
            printf("vvvv ");
            break;
        }
        n = n / 10;
    }
    while (b)
    {
        printf("zero ");
        b--;
    }
    return 0;
}