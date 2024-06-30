#include "main.h"

/**
 * _strcat - concatène deux chaînes de caractères
 * @dest: chaîne de destination
 * @src: chaîne source
 *
 * Return: un pointeur vers la chaîne résultante dest
 */
char *_strcat(char *dest, char *src)
{
	char *d = dest;

	while (*d != '\0')
	{
		d++;
	}

	while (*src != '\0')
	{
		*d = *src;
		d++;
		src++;
	}

	*d = '\0';

	return (dest);
}
