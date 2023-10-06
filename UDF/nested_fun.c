#include <stdio.h>
int fun()
{
    printf("fun");

    // defining view() function inside fun() function.
    int view()
    {
        printf("view");
    }
    view();
    return 1;
}
int main(void)
{
    printf("Main");
    fun();
    // view(); erro
}