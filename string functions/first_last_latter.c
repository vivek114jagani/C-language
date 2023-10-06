#include <stdio.h>

int main()
{
    char a[20], b[20], c[20];
    int n = 0, i, j;

    printf("Enter a string : \n");
    scanf("%s", a);

    for (i = 0; a[i] != '\0'; i++)
    {
        b[i] = a[i];
    }

    printf("new string is : \n");
    for (i = 0; b[i] != '\0'; i++)
    {
        printf("%c", b[i]);
    }
    for (j != '\0'; j > i; j--)
    {
        printf("%c", b[i]);
    }

    if (i / 2 == 1)
    {
        printf("%c", b[i]);
    }
}