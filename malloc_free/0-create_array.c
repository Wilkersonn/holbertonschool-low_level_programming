#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - Créer array du char
 * @size: Taille du tabl a crée
 * @c: Car. Pour Init
 * Return: return always 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * (size + 1));
	if (array == NULL)
	return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	array[size] = '\0';

	return (array);
}
