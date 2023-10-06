#include <stdio.h>

int main()
{
    float unit, total_amount, surcharge;

    printf("Enter the unit : \n");
    scanf("%f", &unit);

    if (unit <= 100)
    {
        total_amount = unit * 60;
    }
    else if (unit <= 300)
    {
        total_amount = (100 * 60) + ((unit - 100) * 80);
    }
    else
    {
        total_amount = (100 * 60) + (200 * 80) + ((unit - 300) * 90);
    }

    if (total_amount < 50)
    {
        total_amount = 50;
    }

    if (total_amount > 300)
    {
        surcharge = total_amount * 0.15;
        total_amount += surcharge;
    }

    printf("Total amount is : %.2f", total_amount);
}