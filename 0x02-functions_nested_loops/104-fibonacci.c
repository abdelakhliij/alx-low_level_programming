#include <stdio.h>

int main(void)
{
    int count = 2;  // We start with 2 numbers (1 and 2).
    int a = 1, b = 2, next;

    printf("%d, %d", a, b);  // Print the first two numbers.

    while (count < 98)
    {
        next = a + b;
        printf(", %d", next);

        a = b;
        b = next;

        count++;
    }

    printf("\n");

    return 0;
}
