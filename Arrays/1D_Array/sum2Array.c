#include <stdio.h>

int main()
{
    int a[3] = {2, 5, 10};
    int b[3] = {7, 10, 4};
    int c[3] = {a[0] + b[0], a[1] + b[1], a[2] + b[2]};

    c[0] = a[0] + b[0];
    printf("a[0] + b[0] = %d\n", c[0]);

    c[1] = a[1] + b[1];
    printf("a[1] + b[1] = %d\n", c[1]);

    c[2] = a[2] + b[2];
    printf("a[2] + b[2] = %d\n", c[2]);

    /* int a[10], b[10], c[10], i, n;

     printf("Enter rhe Array size : \n");
     scanf("%d", &n);

     printf("Enter the elements of A : \n");
     for (i = 0; i < n; i++)
     {
         // printf("a[%d] = ", i);  //you can use this line to beter understand of the array
         scanf("%d", &a[i]);
     }

     printf("Enter the elements of B : \n");
     for (i = 0; i < n; i++)
     {
         // printf("b[%d] = ", i);  //you can use this line to beter understand of the array
         scanf("%d", &b[i]);
     }

     printf("sum of Array A and B is : \n");
     for (i = 0; i < n; i++)
     {
         c[i] = a[i] + b[i];
         // printf("c[%d] = %d\n", i, c[i]);   //you can use this line to beter understand of the array
         printf("%d\n", c[i]);
     }
     */
}