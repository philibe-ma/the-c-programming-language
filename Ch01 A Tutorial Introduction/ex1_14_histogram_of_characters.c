#include <stdio.h>
#include <ctype.h>

#define MAXCHAR     128 // there are 128 characters in ASCII
#define MAXHEIGHT   16  // max height of histogram bars

/* print a histogram of the frequencies of different characters in ASCII */
int main()
{
    int i, j, c;
    int nc[MAXCHAR];    // number of different characters
    int maxvalue;       // max value of nc[]
    int height;         // height of each bar

    for (i = 0; i < MAXCHAR; ++i)
    {
        nc[i] = 0;
    }

    while ((c = getchar()) != EOF)
    {
        if (c < MAXCHAR)
        {
            ++nc[c];
        }
    }

    maxvalue = 0;
    for (i = 0; i < MAXCHAR; ++i)
    {
        if (nc[i] > maxvalue)
        {
            maxvalue = nc[i];
        }
    }

    for (i = 0; i < MAXCHAR; ++i)
    {
        if (isprint(i))
        {
            printf("%3d - %c - %3d: ", i, i, nc[i]);
        }
        else
        {
            printf("%3d -   - %3d: ", i, nc[i]);
        }
        if (nc[i] > 0)
        {
            if ((height = nc[i] * MAXHEIGHT / maxvalue) <= 0)
            {
                height = 1;
            }
        }
        else
        {
            height = 0;
        }
        for (j = 1; j <= height; ++j)
        {
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}