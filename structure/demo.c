#include<stdio.h>
#include<string.h>

struct vj
{
    int a;
    char b[10];
};

int main()
{
    struct vj s1;
    
    s1.a = 10;
    strcpy(s1.b, "hello");

    printf("%d\n", s1.a);
    printf("%s\n", s1.b);
}