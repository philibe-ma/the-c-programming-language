#include <stdio.h>

#define MAXLEN  1000    // max line length in physical storage ('\0' included)

int get_line(char line[], int maxlen);
void copy_line(char to[], char from[]);

/* read a set of lines and print the longest;
   the line length is only counted to a maximum of MAXLEN-1 */
int main()
{
    char line[MAXLEN];      // cunrrent line
    char longest[MAXLEN];   // longest line
    int len;    // current line length ('\0' excluded)
    int max;    // max line length ('\0' excluded)

    max = 0;
    while (len = get_line(line, MAXLEN))
    {
        printf("len: %d\n", len);
        if (len > max)
        {
            max = len;
            copy_line(longest, line);
        }
    }

    printf("The longest line:\n%s", longest);
    printf("(length: %d)\n", max);

    return 0;
}

/* read and save a single line to line[], and return the line length ('\0' excluded);
   the line is only read and the length is only counted to a maximum of maxlen-1 */
int get_line(char line[], int maxlen)
{
    int i, c;

    for (i = 0; i < maxlen-1 && (c = getchar()) != EOF && c != '\n'; ++i)
    {
        printf("i = %d, c = %d\n", i, (int)c);
        line[i] = c;
    }
    if (c == '\n')
    {
        line[i] = '\n';
        ++i;
    }
    line[i] = '\0';

    return i;
}

/* copy a single line from from[] to to[] */
void copy_line(char to[], char from[])
{
    int i;

    for (i = 0; (to[i] = from[i]) != '\0'; ++i)
    {
    }
}