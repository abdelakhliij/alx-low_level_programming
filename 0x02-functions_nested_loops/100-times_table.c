#include "main.h"

/**
 * print_times_table - prints the n times table
 * @n: The number for which to print the times table
 */
void print_times_table(int n)
{
    if (n < 0 || n > 15)
        return;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            int result = i * j;
            if (j != 0)
            {
                _putchar(',');
                _putchar(' ');
                if (result < 10)
                    _putchar(' ');
                if (result < 100)
                    _putchar(' ');
            }
            _putchar((result / 100) % 10 + '0');
            _putchar((result / 10) % 10 + '0');
            _putchar(result % 10 + '0');
        }
        _putchar('\n');
    }
}
