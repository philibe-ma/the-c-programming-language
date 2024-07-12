#include <stdio.h>

/* copy input to output, v2.0 */
int main()
{
    int c;

    while ((c = getchar()) != EOF)
    {
        putchar(c);
    }

    return 0;
}