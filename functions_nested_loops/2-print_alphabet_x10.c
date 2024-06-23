#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	int e = 0;

	while (e < 10)
	{
		for (i = 0; i < 26; i++)
		{
			_putchar(alphabet[i]);
		}
		_putchar('\n');
		e++;
	}

}

