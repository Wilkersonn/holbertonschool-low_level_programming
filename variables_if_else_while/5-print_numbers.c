#include <stdio.h>

/**
 * main - This is the entry point of the code
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c = 0;

	while (c <= 9)
	{
		putchar(c + '0');
		c++;
	}

	putchar('\n');

	return (0);
}
