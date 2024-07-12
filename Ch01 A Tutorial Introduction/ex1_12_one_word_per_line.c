#include <stdio.h>

#define OUT 0   // outside a word
#define IN 1    // inside a word

/* print the input one word per line */
int main()
{
    int c, state;

    state = OUT;
    while ((c = getchar()) != EOF)
    {
        if (c != ' ' && c != '\t' && c != '\n')
        {
            state = IN;
            putchar(c);
        }
        else if (state == IN)
        {
            state = OUT;
            printf("\n");
        }
    }
}