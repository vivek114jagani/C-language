// arguments pass but no returns value
#include <stdio.h>

void pal_num(int n);

void pal_num(int n)
{
    int a, b, r, i;

    b = n;
    for (a = 0; n > 0; i++)
    {
        r = n % 10;
        a = (a * 10) + r;
        n /= 10;
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

void main()
{
    int n;

    printf("Enter the number : ");
    scanf("%d", &n);
    pal_num(n);
}
