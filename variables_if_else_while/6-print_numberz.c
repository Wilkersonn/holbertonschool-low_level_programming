#include <stdio.h>

/**
 * main - This is the entry point of the code
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c = 9;

	while (c >= 0)
	{
		putchar(c + '0');
		c--;
	}

	putchar('\n');

	return (0);
}
