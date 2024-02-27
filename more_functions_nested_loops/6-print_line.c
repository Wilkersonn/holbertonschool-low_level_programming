#include "main.h"
/**
 * print_line - Print a line until 0
 *
 * @n: if 'n' is zero, then return to line.
 */

void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
_putchar('_');
}
}
