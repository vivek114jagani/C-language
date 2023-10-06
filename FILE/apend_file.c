#include <stdio.h>

int main()
{
    FILE *python;

    python = fopen("kurm.txt", "a");
    fprintf(python, "\nwelcome to my PC");

    fclose(python);
}