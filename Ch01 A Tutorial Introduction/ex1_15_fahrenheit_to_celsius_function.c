#include <stdio.h>

#define LOWER   20
#define UPPER   200
#define STEP    20

float fahr_to_cels(float fahr);

/* test function fahr_to_cels() */
int main()
{
    float i;

    for (i = LOWER; i <= UPPER; i = i + STEP)
    {
        printf("%3.0f %6.1f\n", i, fahr_to_cels(i));
    }
}

/* convert a temperature in Fahrenheit to Celsius */
float fahr_to_cels(float fahr)
{
    return (5.0/9.0) * (fahr - 32.0);
}