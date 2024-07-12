#include <stdio.h>

/* replace each string of one or more blanks by a single blank*/
int main()
{
    int c, more_blanks = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' && more_blanks == 0)
        {
            more_blanks = 1;
        }
        else if (c == ' ' && more_blanks == 1)
        {
            continue;
        }
        else
        {
            more_blanks = 0;
        }
        putchar(c);
    }

    return 0;
}