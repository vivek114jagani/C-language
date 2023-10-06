#include <stdio.h>

int main()
{
    float BS, HRA, DA, GS;

    printf("Enter the Basic salaray : \n");
    scanf("%f", &BS);

    if (BS <= 5000)
    {
        HRA = BS * 0.08;
        DA = BS * 0.2;
    }
    else if (BS <= 10000)
    {
        HRA = BS * 0.12;
        DA = BS * 0.3;
    }
    else if (BS <= 15000)
    {
        HRA = BS * 0.15;
        DA = BS * 0.4;
    }
    else
    {
        HRA = BS * 0.2;
        DA = BS * 0.5;
    }

    GS = BS + HRA + DA;
    printf("GS = %.2f\n", GS);
}