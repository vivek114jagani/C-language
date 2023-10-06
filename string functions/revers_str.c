#include <stdio.h>
    
int main()
{
    char str[20];
    int n = 0, i;

    printf("Enter a string: \n");
    scanf("%s", str);

    while (str[n] != '\0')
    {
        n++;
    }

    printf("\nThe reverse of the string is: \n");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
}
