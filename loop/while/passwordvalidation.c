#include <stdio.h>

int main()
{
    int n, i;

    i == n;
    while (n >= i)
    {
        printf("Enter the password : ");
        scanf("%d", &n);

        printf("Enter the password : ");
        scanf("%d", &i);

        if (i == n)
        {
            printf("done");
        }
        else
        {
            printf("error");
        }
        i++;
    }
}