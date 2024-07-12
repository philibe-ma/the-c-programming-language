#include <stdio.h>

/* count blanks, tabs, and newlines in input */
int main()
{
    int c, nw;

    nw = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            ++nw;
        }
    }
    printf("%d\n", nw);

    return 0;
}