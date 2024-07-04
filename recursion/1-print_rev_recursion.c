#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse, followed by a new line
 * @s: The string to be printed in reverse
 *
 * Description: This function prints each character of the string recursively
 * in reverse order, followed by a new line.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
