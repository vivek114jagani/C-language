#include <stdio.h>

int main()
{
    int n, a = 0, b, r;

    printf("Enter the number : ");
    scanf("%d", &n);

    b = n;
    do
    {
        r = n % 10;
        a = (a * 10) + r;
        n = n / 10;
    } while (n > 0);
    if (b == a)
    {
        printf("palindrome number");
    }
    else
    {
        printf("not palindrome number");
    }
}