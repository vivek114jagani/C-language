#include<stdio.h>

int main()
{
    int num1,num2,div;
    printf("number two division\n" );

    printf("Enter first number\n" ) ;
    scanf("%d",&num1);

    printf("Enter second number\n" );
    scanf("%d",&num2);

    div=num1/num2; 
    printf("\ndivision of %d & %d is = %d\n", num1,num2,div);
    return 0;

}
