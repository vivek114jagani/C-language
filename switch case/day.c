#include <stdio.h>

int main()
{
    int a;

    printf("Enter the number : ");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("sunday\n");
        break;

    case 2:
        printf("monday\n");
        break;

    case 3:
        printf("tuseday\n");
        break;

    case 4:
        printf("wenusday\n");
        break;

    case 5:
        printf("thusday\n");
        break;

    case 6:
        printf("fraiday\n");
        break;

    case 7:
        printf("saturday\n");
        break;

    default:
        printf("!!!...only seventh day's are exiquate in the world...!!!\n");
        break;
    }
}