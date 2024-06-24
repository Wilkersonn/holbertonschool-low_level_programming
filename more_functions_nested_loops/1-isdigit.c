#include "main.h"
#include <stdio.h>


/**
 * _isdigit - Verify if the char is digit or not
 *
 * @c: the char being verified
 *
 * Return: 1 ou 0
 *
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
