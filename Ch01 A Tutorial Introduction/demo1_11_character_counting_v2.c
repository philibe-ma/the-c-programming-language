#include <stdio.h>

/* count characters in input, v2.0 */
int main()
{
    double nc;  // to cope with even bigger number

    // using a for loop instead of a while loop
    for (nc = 0; getchar() != EOF; ++nc)
    {
    }
    printf("%.0f\n", nc);

    return 0;
}