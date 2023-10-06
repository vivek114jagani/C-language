#include <stdio.h>

int main()
{
    int i, a[4] = {45, 76, 89, 32};

    for (i = 3; i >= 0; i--)
    {
        printf("%d\n", a[i]);
    }
}