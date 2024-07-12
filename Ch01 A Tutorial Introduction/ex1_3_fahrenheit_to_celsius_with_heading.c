#include <stdio.h>

int main()
{
    float fahr, cels;
    float lower, upper, step;

    lower = 0;
    upper = 200;
    step = 20;

    printf("fahr   cels\n");

    fahr = lower;
    while (fahr <= upper)
    {
        cels = (5.0/9.0) * (fahr-32.0);
        printf("%4.0f %6.1f\n", fahr, cels);
        fahr = fahr + step;
    }

    return 0;
}