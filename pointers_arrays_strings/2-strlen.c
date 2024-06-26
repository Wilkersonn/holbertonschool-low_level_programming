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

	size_t longueur = strlen(s);

	return ((int)longueur);

}
