#include <stdio.h>

#define OUT 0   // outside a word
#define IN 1    // inside a word

/* count characters, lines, and words in input */
int main()
{
    int c, nc, nl, nw, state;

    nc = nl = nw = 0;
    state = OUT;
    while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c == '\n')
        {
            ++nl;
        }
        if (c == ' ' || c == '\t' || c == '\n')
        {
            state = OUT;
        }
        else if (state == OUT)
        {
            state = IN;
            ++nw;
        }
    }

    printf("char: %d\n", nc);
    printf("line: %d\n", nl);
    printf("word: %d\n", nw);

    return 0;
}