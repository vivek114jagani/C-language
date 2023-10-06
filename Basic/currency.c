#include <stdio.h>

int main()
{
    float Rs, US$, Pound, Euro;

    printf("ENter the indian Rs : ");
    scanf("%f", &Rs);

    US$ = Rs / 82.37;
    printf("%.2f Rs = %.2f US$\n", Rs, US$);

    Pound = Rs / 91.22;
    printf("%.2f Rs = %.2f Pound\n", Rs, Pound);

    Euro = Rs / 80.22;
    printf("%.2f Rs = %.2f Euro\n", Rs, Euro);
}