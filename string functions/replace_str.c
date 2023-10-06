#include<stdio.h>
#include<string.h>
char* re(char *w)
{
    int i;char c;
    for(i=0;w[i]!='\0';i++)
    {
        if(i%2==0)
        {
            c=(i+1)+'0';
            w[i]=c;
        }
    }
    return w;
}
void main()
{
    char w[20];
    char *rep;
    printf("Enter Word :- ");
    gets(w);
    re(w);
    printf("Replaced String :- %s",w);
}