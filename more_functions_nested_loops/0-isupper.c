#include "main.h"
#include <stdio.h>


/**
 * _isupper - Verify if the char is lower or not
 *
 * @c: the char being verified
 *
 * Return: 1 ou 0
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
