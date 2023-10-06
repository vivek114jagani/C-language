#include <stdio.h>

int main()
{
    int guj, maths, sci, sun, drow, total, avg, gred;

    printf("sub\ttotal\tget\n");
    printf("guj\t100\t");
    scanf("%d", &guj);
    printf("maths\t100\t");
    scanf("%d", &maths);
    printf("sci\t100\t");
    scanf("%d", &sci);
    printf("sun\t100\t");
    scanf("%d", &sun);
    printf("drow\t100\t");
    scanf("%d", &drow);

    total = guj + maths + sci + sun + drow;
    printf("total\t\t%d\n", total);

    avg = total / 5;
    printf("avg\t\t%d\n", avg);

    gred = avg;

    {
        /* int avg;
         printf("Enter avg :");
         scanf("%d",&avg); */

        if (avg > 85 && avg <= 100)
        {
            printf("grade\t\t A ...");
        }
        else if (avg > 60 && avg <= 85)
        {
            printf("grade \t\tB + ...");
        }
        else if (avg > 40 && avg <= 60)
        {
            printf("grade\t\t B ...");
        }
        else if (avg > 30 && avg <= 40)
        {
            printf("grade \t\tC ...");
        }
        else
        {
            printf("grade\t\tfail");
        }
    }
    /* printf("Enter the 5 subjects marks :%d\n");
     scanf("%d%d%d%d%d", &guj, &maths, &sci, &sun, &dro);

     total = guj + maths + sci + sun + dro;
     printf("total marks :%d\n",total);

     avg = total/5;
     printf("average marks :%d\n",avg);*/

    return 0;
}
