#include "main.h"
#include <stdio.h>


/**
 * _islower - Verify if the char is lower or not
 *
 * @c: the char being verified
 *
 * Return: Always 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
