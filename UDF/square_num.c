// arguments pass and returns value
#include <stdio.h>

int square(int n);

int square(int n)
{
    int i;

    printf("Square Number is : \n");
    for (i = 1; i < n; i++)
    {
        printf("%d\n", i * i);
    }
    return i;
}

int main()
{
    int n;

    printf("ENter the number : \n");
    scanf("%d", &n);
    square(n);
    return 0;
}