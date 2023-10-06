#include <stdio.h>
void main()
{
    int count = 1, a = 1, count1 = 0;
    count1 = count = a = 0;
    printf("%d", count1);
    printf("%d", count);

    printf("%d", a);
}