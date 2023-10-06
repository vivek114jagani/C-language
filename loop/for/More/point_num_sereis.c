#include <stdio.h>

int main()
{
    int n, i;
    double a = 0.5, b = 0, c;

    printf("Enter the number : ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        printf("%.0f ", a);
        c = a + b;
        b += 0.5;
        a = b;
        b = c;
    }
}