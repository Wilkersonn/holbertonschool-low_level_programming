#include "main.h"
#include <stdio.h>

/**
 * main - This is the entry point of the code
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'n' && c != 'e')
		{
			putchar(c);
		}
		c++;
	}

	putchar('\n');

	return (0);
}
