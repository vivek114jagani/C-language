#include <stdio.h>

int main()
{
    int n, i;

    printf("ENter the number : \n");
    scanf("%d", &n);

    printf("Square Number is : \n");
    for (i = 1; i < n; i++)
    {
        printf("%d\n", i * i);
    }
}