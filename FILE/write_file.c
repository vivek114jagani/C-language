#include <stdio.h>

int main()
{
    FILE *fptr;

    fptr = fopen("f1.txt", "w");
    fprintf(fptr, "Some text\n");
    
    fclose(fptr);

    return 0;
}