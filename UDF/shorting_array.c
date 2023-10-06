#include <stdio.h>

void sort_arr(int a[], int ch)
{
    int i, temp, j;
    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (ch == 1)
            {
                if (a[i] > a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
            else
            {
                if (a[i] < a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
    }
    printf("Sorted Array:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
}
int main()
{
    int a[10], i, n, choice;
    printf("Enter Elements Of array :-\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nEnter 1 For ascending\nEnter 2 For Descending\n");
    scanf("%d", &choice);
    sort_arr(a, choice);
}