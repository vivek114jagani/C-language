#include<stdio.h>

double mypower(double b,double e)   
{
    if(e==0)
        return 1;
    else if(e<1)
        return 1/mypower(b,-e);     
    else
        return b*mypower(b,e-1);    
}
void main()
{
    int b,e;
    printf("Enter Length:- ");
    scanf("%d",&b);
    printf("Enter Width:- ");
    scanf("%d",&e);
    printf("Power :- %.2lf",mypower(b,e));
}