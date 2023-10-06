#include <stdio.h>

int main()
{
    int ts, h, m, s;

    printf("Enter the total seconde : ");
    scanf("%d", &ts);

    h = ts / 3600;
    ts = ts % 3600;
    m = ts / 60;
    s = ts % 60;

    printf("hour : min : sec ::\n %d : %d : %d", h, m, s);
}