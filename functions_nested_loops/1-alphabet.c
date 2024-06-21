#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(alphabet[i]);
	}
	_putchar('\n');
}
