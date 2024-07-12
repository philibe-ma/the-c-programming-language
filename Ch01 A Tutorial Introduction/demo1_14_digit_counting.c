#include <stdio.h>

/* count digits, white space, and other characters */
int main()
{
    int ndigit[10];
    int nwhite, nother;
    int c, i;

    nwhite = nother = 0;
    for (i = 0; i < 10; ++i)
    {
        ndigit[i] = 0;
    }

    while ((c = getchar()) != EOF)
    {
        if (c >= '0' && c <= '9')
        {
            ++ndigit[c-'0'];
        }
        else if (c == ' ' || c == '\t' || c == '\n')
        {
            ++nwhite;
        }
        else
        {
            ++nother;
        }
    }

    printf("digits 0-9: ");
    for (i = 0; i < 10; ++i)
    {
        printf("%d ", ndigit[i]);
    }
    printf("\nwhitespace: %d", nwhite);
    printf("\nother: %d", nother);

    return 0;
}