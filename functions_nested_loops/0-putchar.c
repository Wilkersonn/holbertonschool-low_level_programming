#include "main.h"
#include <time.h>
#include <stdio.h>

/**
 * main - This is the entry point of the code
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char text[] = "_putchar";
	int counter;

	for (counter = 0; text[counter] != '\0'; counter++)
	{
		_putchar(text[counter]);
	}

	_putchar('\n');
	return (0);
}
