#include <stdio.h>

#define P printf
#define S scanf

int main()
{
    int a[10][10], b[10], r, c, i, j, k = 0, count = 0;

    P("Enter No. Of Rows & Columns Of Matrix :\n");
    S("%d %d", &r, &c);
    P("\nEnter Elements : \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            P("Enter [%d][%d] : ", i, j);
            S("%d", &a[i][j]);
            b[k] = a[i][j];
            k++;
        }
    }
    P("\nMatrix A : \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            P("%d\t", a[i][j]);
        }
        P("\n");
    }
    for (i = 0; i < r * c; i++)
    {
        for (j = i + 1; j < r * c; j++)
        {
            if (b[i] == b[j])
            {
                count++;
                break;
            }
        }
    }
    P("\nThere is %d Duplicate Values in Matrix", count);
}