#include <stdio.h>

int main()
{
    int a, b, c, n;

    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("\nEnter the second number : ");
    scanf("%d", &b);

    do
    {
        printf("\n********************************");
        printf("\n1 for addition");
        printf("\n2 for subtraction");
        printf("\n3 for multiplication");
        printf("\n4 for division");
        printf("\n5 for exit");
        printf("\n********************************");
        printf("\nEnter Operator (+, -, *, /) : ");
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
            printf("exit");
            break;

        default:
            printf("error: unknown operator");
            break;
        }
    } while (n != 5);
}