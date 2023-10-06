#include <stdio.h>

struct volume
{
    int lit, mll;
};

void main()
{
    struct volume vol[2];
    int i, sum_lit = 0, sum_mll = 0;

    for (i = 0; i < 2; i++)
    {
        printf("==================================\n");
        printf("ENter the value of volume %d :-\n", i + 1);

        printf("\nEnter the value of liter : ");
        scanf("%d", &vol[i].lit);

        printf("\nEnter the value of milliliter : ");
        scanf("%d", &vol[i].mll);
    }

    for (i = 0; i < 2; i++)
    {
        sum_lit += vol[i].lit;
        sum_mll += vol[i].mll;
    }

    while(sum_mll >= 1000)
    {
        sum_mll -= 1000;
        sum_lit += 1;
    }
    
    printf("=-=-=-=-=-=-=-=-=-=-\n");
    printf("liter is :- %d\nmilliliter is :- %d\n", sum_lit, sum_mll);
}