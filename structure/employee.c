#include<stdio.h>

struct employee
{
    int id;
    char name[20];
    float salary;
};

int main()
{
    struct employee emp[5];
    int i;
    
    for (i = 0; i < 5; i++)
    {
        printf("=======================================\n");
        printf("Enter the DATA of employee %d :-\n", i + 1);

        printf("Enter ID :- ");
        scanf("%d", &emp[i].id);

        printf("\nEnter Name :- ");
        scanf("%s", &emp[i].name);

        printf("\nEnter salary :- ");
        scanf("%f", &emp[i].salary);
    }
    
    printf("\n\nDisplay the Data for employee whose salary is less than 15000 :-\n");
    for (i = 0; i < 5; i++)
    {
        if (emp[i].salary < 15000)
        {
            printf("=-=-=-=-=-=-=-=-=-=-=-=-\n");
            printf("ID :- %d\nName :- %s\nsalary :- %.2f\n", emp[i].id, emp[i].name, emp[i].salary);
        }
    }
}