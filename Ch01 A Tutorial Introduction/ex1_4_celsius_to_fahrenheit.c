#include <stdio.h>

/* print the Celsius-Fahrenheit table
   cels = -20, -10, 0, ..., 100 */
int main()
{
    float cels, fahr;
    float lower, upper, step;

    lower = -20;
    upper = 100;
    step = 10;
    /* step = 1; */

    printf("cels   fahr\n");

    cels = lower;
    while (cels <= upper)
    {
        fahr = (9.0/5.0) * cels + 32.0;
        printf("%4.0f %6.1f\n", cels, fahr);
        cels = cels + step;
    }

    return 0;
}