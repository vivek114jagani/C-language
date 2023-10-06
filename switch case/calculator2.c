#include <stdio.h>

int main()
{
    int a, b, c, n, total;

    printf("Enter the first number : ");
    scanf("%d", &a);

    do
    {
        printf("\nEnter the second number : ");
        scanf("%d", &b);

        printf("***********************");
        printf("\n1 for addition");
        printf("\n2 for subtraction");
        printf("\n3 for multiplication");
        printf("\n4 for division");
        printf("\n5 for total");
        printf("\n***********************");
        printf("\nEnter operator (+, -, *, /) : ");
        scanf("%d", &n);

        switch (n)
        {
        case 1:
            printf("a+b = %d", a + b);
            break;

        case 2:
            printf("a-b = %d", a - b);
            break;

        case 3:
            printf("a*b = %d", a * b);
            break;

        case 4:
            printf("a/b = %d", a / b);
            break;

        case 5:
            total = (a + b) + (a - b) + (a * b) + (a / b);
            printf("total = %d", total);
            break;

        default:
            printf("error : unknow operator");
            break;
        }
    } while (n != 0);
}