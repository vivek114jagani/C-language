#include <stdio.h>

int main()
{
    int n, a = 0, b, r, i;

    printf("Enter the number : ");
    scanf("%d", &n);

    b = n;
    for (a = 0; n > 0; i++)
    {
        r = n % 10;
        a = (a * 10) + r;
        n = n / 10;
    }
    if (b == a)
    {
        printf("palindrome number");
    }
    else
    {
        printf("not palindrome number");
    }
}