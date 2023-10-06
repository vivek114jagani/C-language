#include <stdio.h>

enum colors
{
    red = 83,  // 0            // 5            // 0
    blue = 75, // 78           // 5 + 1 \\     // 1
    black = 97 // 78 + 1 \\    // 5 + 2 \\     // 2
};

int main()
{
    enum colors a = black;

    printf("%d", a);
}