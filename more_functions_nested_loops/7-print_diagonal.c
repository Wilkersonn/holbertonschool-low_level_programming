#include "main.h"

/**
 * print_diagonal - prints a diagonal line of backslashes
 * @n: number of backslashes to print
 *
 * Description: If n is 0 or less, prints only a newline.
 * Otherwise, prints a diagonal line of n backslashes, each line
 * with an incremental space before the backslash.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
