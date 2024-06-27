#include "main.h"
#include <stdio.h>
/**
 * _puts - Puts
 *
 * @str: Always 0.
 */
void _puts(char *str)
{

	char *ptr = str;


	while (*ptr != '\0')
	{

		putchar(*ptr);

		ptr++;
	}

	putchar('\n');
}
