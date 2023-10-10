#include <stdio.h>

int main(void)
{
    long long int first = 1, second = 2, next, sum = 2; // Start with the first two Fibonacci numbers (1 and 2) and initialize the sum to 2.

    while (1)
    {
        next = first + second; // Generate the next Fibonacci number.

        if (next > 4000000)
            break; // If the next number exceeds 4,000,000, exit the loop.

        if (next % 2 == 0)
            sum += next; // If the next number is even, add it to the sum.

        first = second; // Update the previous numbers for the next iteration.
        second = next;
    }

    printf("%lld\n", sum); // Print the sum of even-valued Fibonacci numbers.

    return 0;
}
