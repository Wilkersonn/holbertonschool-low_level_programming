#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - Prints a string followed by a new line, recursively
 * @s: The string to be printed
 *
 * Description: This function prints each character of the string recursively,
 * followed by a new line at the end.
 */
void _puts_recursion(char *s)
{
		if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;

	_puts_recursion(s);
}
