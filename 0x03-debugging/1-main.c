#include <stdio.h>

/**
 * main - avoids an infinite loop
 * Return: 0
 */
int main(void)
{
    int i;
    printf("Infinite loop incoming :(\n");
    i = 0;

    while (i < 10)
    {
        putchar(i + '0'); // Print the number as a character
        i++;
    }

    printf("\nInfinite loop avoided! \\o/\n");

    return (0);
}
