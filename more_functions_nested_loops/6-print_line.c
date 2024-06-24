#include "main.h"

/**
 * print_line - prints a line of underscores
 * @n: number of underscores to print
 *
 * Description: If n is 0 or less, prints only a newline.
 * Otherwise, prints n underscores followed by a newline.
 */
void print_line(int n)
{
    int i;

    if (n <= 0)
    {
        _putchar('\n');
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            _putchar('_');
        }
        _putchar('\n');
    }
}
