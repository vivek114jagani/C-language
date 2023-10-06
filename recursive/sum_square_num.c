#include <stdio.h>

int sum_squ(int n) 
{
    if (n == 1) return 1;
    return n * n + sum_squ(n - 1);
}

void main() 
{
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Sum of squares of first %d natural numbers: %d\n", n, sum_squ(n));
}