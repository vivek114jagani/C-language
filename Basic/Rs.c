#include <stdio.h>

int main()
{
    int Rs, p;
    float n;

    printf("Enter the value of n : ");
    scanf("%f", &n);

    Rs = n;
    printf("total Rs:%d\n", Rs);

    p = (n - Rs) * 100;
    printf("total p:%d\n", p);
}