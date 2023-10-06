#include <stdio.h>

int main()
{
    char a[10], b[10], c[20];
    int i, j;

    printf("Enter the first string: \n");
    scanf("%s", a);

    printf("\nEnter the second string: \n");
    scanf("%s", b);

    for (i = 0; a[i] != '\0'; i++)
    {
        c[i] = a[i];
    }

    for (j = 0; b[j] != '\0'; j++)
    {
        c[i + j] = b[j];
    }

    c[i + j] = '\0';

    printf("\nThe merged string is: \n%s", c);
}
