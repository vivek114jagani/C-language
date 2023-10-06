#include<stdio.h>

/*int main()
{
    int a[5] = {10,20,30,40,50};
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("%d\n", a[i]);
        printf("%p\n", &a[i]);
    } 
}
*/

/*int main()
{
    int n, i, a[10];

    printf("Enter the array size : ");
    scanf("%d", &n);

    printf("ENter the array A elements : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("%p\n", &a[i]);
    }
}
*/

int main()
{
    // int a[5] = { 11,12,13,14,15};
    int n, i, a[5];

    printf("Enter the array size : ");
    scanf("%d", &n);

    printf("ENter the array A elements : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("sizeof array a is : \n");
    
    printf("%d", sizeof(a)); 
}