#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string
 * @str: The string to duplicate
 *
 * Description: This function creates a copy of the string pointed to by str.
 * It allocates memory for the new string using malloc, and returns a
 * pointer to it.
 *
 * Return: If str is NULL or if memory allocation fails, returns NULL.
 *              Otherwise, returns a pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	char *copy;
	int longueur = 0;
	int i;

	if (str == NULL)
		return (NULL);

	while (str[longueur] != '\0')
	{
		longueur++;
	}

	copy = malloc((longueur + 1) * sizeof(char));

	if (copy == NULL)
		return (NULL);

	for (i = 0; i < longueur; i++)
	{
		copy[i] = str[i];
	}

	copy[longueur] = '\0';

	return (copy);
}
