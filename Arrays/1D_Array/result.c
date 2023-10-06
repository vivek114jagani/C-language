#include <stdio.h>

int main()
{
    int sci[10], math[10], sun[10], n, i;
    float total[10], per[10];

    printf("Enter the number of students in class A: \n");
    scanf("%d", &n);

    printf("Enter the marks of students in science, math, and social studies: \n");
    for (i = 0; i < n; i++)
    {
        printf("Student %d: \n", i + 1);
        scanf("%d %d %d", &sci[i], &math[i], &sun[i]);
        total[i] = sci[i] + math[i] + sun[i];
        per[i] = total[i] / 3;
    }

    printf("===================================================");
    printf("\nsci\tmath\tsun\ttotal\tper\tgrad\n");
    printf("===================================================\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t%d\t%d\t%.2f\t%.2f\t", sci[i], math[i], sun[i], total[i], per[i]);
        if (sci[i] <= 35)
        {
            printf("Fail\n");
        }
        else if (math[i] <= 35)
        {
            printf("Fail\n");
        }
        else if (sun[i] <= 35)
        {
            printf("Fail\n");
        }
        else if (per[i] > 85 && per[i] <= 100)
        {
            printf("A\n");
        }
        else if (per[i] > 60 && per[i] <= 85)
        {
            printf("B+\n");
        }
        else if (per[i] > 40 && per[i] <= 60)
        {
            printf("B\n");
        }
        else if (per[i] > 35 && per[i] <= 40)
        {
            printf("C\n");
        }
        else
        {
            printf("Fail\n");
        }
    }
    printf("===================================================\n");
    return 0;
}