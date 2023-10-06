#include <stdio.h>
#include <string.h>

int count(char *w)
{
    int i, n = 0;
    char c;
    for (i = 0; w[i] != '\0'; i++)
    {
        c = w[i];
        if (!(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'))
        {
            n++;
        }
    }
    return n;
}
void main()
{
    char w[20];
    char *rep;
    printf("Enter Word :- ");
    gets(w);
    printf("Consonant :- %d", count(w));
}