#include <stdio.h>

/* copy input to output, v2.0 */
int main()
{
    int c;

    while ((c = getchar()) != EOF)
    {
        printf("c = %d\n", c);
    }
    printf("c = %d at EOF\n", c);

    return 0;
}