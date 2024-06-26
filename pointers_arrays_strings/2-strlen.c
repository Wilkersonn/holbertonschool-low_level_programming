#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - returns the length of a string
 *
 * @s: the string to measure
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int longueur = 0;

	while (*s != '\0')
	{
		longueur++;
		s++;
	}

	return (longueur);

}
