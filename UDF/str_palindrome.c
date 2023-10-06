#include <stdio.h>
#include <string.h>

void str_palin(char a[])
{
    char b[10];
    strcpy(b, a);
    strrev(b);
    if (strcmp(b, a) == 0)
        printf("String is a Palindrome");
    else
        printf("String is a Not Palindrome");
}
void main()
{
    char s[10];

    printf("Enter the string :- ");
    gets(s);
    str_palin(s);
}