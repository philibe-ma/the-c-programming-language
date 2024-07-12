#include <stdio.h>

#define NONBALNK 'a'

/* replace each string of one or more blanks by a single blank*/
int main()
{
    int c, lastc = NONBALNK;

    while ((c = getchar()) != EOF)
    {
        if (c != ' ' || lastc != ' ')
        {
            putchar(c);
        }
        lastc = c;
    }
}