#include <stdio.h>

int main()
{
    char c;

    printf("Enter character: ");
    c = getchar();

    printf("Character entered: ");
    putchar(c);

    c = getchar();
    printf("\nSecond character: ");
    putchar(c);

    putchar('a');

    return 0;
}