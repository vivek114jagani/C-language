#include <stdio.h>
#include <string.h>

void main()
{
    char a[10][15], temp[10];
    int i, j, n;

    printf("How many strings you want to enter : ");
    scanf("%d", &n);

    printf("======================================\n");
    printf("Enter the string : \n");
    printf("======================================\n");
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%s", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(a[i], a[j]) > 0)
            {
                strcpy(temp, a[i]);
                strcpy(a[i], a[j]);
                strcpy(a[j], temp);
            }
        }
    }

    printf("\nLexicographical order in string is :- \n");
    printf("======================================\n");

    for (i = 0; i < n; i++)
    {
        printf("%s\n", a[i]);
    }
}