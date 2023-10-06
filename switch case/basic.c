#include <stdio.h>

int main()
{
    int a;

    printf("Enter the number : ");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("yes a = 1");
        break;

    case 2:
        printf("yes a = 2");
        break;

    case 3:
        printf("yes a = 3");
        break;

    case 4:
        printf("yes a = 4");
        break;

    case 5:
        printf("yes a = 5");
        break;

    default:
        printf("you have choices other than 1, 2, 3, 4 and 5");
        break;
    }
}