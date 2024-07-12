#include <stdio.h>

#define MAXLEN      16  // max length of words
#define MAXHEIGHT   16  // max height of histogram bars
#define OUT         0   // outside a word
#define IN          1   // inside a word

/* print a histogram of the lengths of words */
int main()
{
    int i, j, c;
    int nword[MAXLEN];  // number of words of different lengths
    int noverflow;      // number of overflow words
    int state;          // outside or inside a word
    int length;         // length of the current word
    int maxvalue;       // max value for nword[]
    int height;         // height of each bar

    for (i = 0; i < MAXLEN; ++i)
    {
        nword[i] = 0;
    }
    noverflow = 0;

    state = OUT;
    length = 0;
    while ((c = getchar()) != EOF)
    {
        if (state == OUT && (c != ' ' && c != '\t' && c != '\n'))
        {
            state = IN;
        }
        if (state == IN && (c == ' ' || c == '\t' || c == '\n'))
        {
            state = OUT;
            if (length <= MAXLEN)
            {
                ++nword[length-1];
            }
            else
            {
                ++noverflow;
            }
            length = 0;
        }
        if (state == IN)
        {
            ++length;
        }
    }

    maxvalue = 0;
    for (i = 0; i < MAXLEN; ++i)
    {
        if (nword[i] > maxvalue)
        {
            maxvalue = nword[i];
        }
    }

    printf("Histogram of Length of Words:\n");
    for (i=0; i < MAXLEN; ++i)
    {
        printf("%2d: ", i+1);
        if (nword[i] > 0)
        {
            if ((length = nword[i] * MAXHEIGHT / maxvalue) <= 0)
            {
                length = 1;
            }
        }
        else
        {
            length = 0;
        }
        for (j = 1; j <= length; ++j)
        {
            putchar('*');
        }
        putchar('\n');
    }
    printf("There are %d words whose length overflows the MAXLEN.\n", noverflow);

    return 0;
}