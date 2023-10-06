#include <stdio.h>
#include <string.h>

union demo
{
    int a;
    float b;
    char c[10];
};

int main()
{
    //=>> 1>>
    /*union demo x = {101, 5600, "vivek"};
    printf("a = %d\nb = %.2f\nc = %s", x.a, x.b, x.c);

    printf("\nsize of union : %d\n", sizeof(x));
    */
    //=>> 2>>
    /* union demo x; // = {101, 5600, "vivek"};
     x.a = 19;
     x.b = 45;
     strcpy(x.c, "hello world");
     printf("a = %d\nb = %.2f\nc = %s", x.a, x.b, x.c);
     */
    //=>> 3>>
    /* union demo x; // = {101, 5600, "vivek"};
     x.a = 19;
     printf("a = %d\n", x.a);
     x.b = 45;
     printf("b = %.2f\n", x.b);
     strcpy(x.c, "hello world");
     printf("c = %s\n", x.c);
     */
    //=>> 4>>
    union demo x; //= {101, 5600, "vivek"};
    x.a = 45;
    printf("a = %d\nb = %.2f\nc = %s", x.a, x.b, x.c);
}