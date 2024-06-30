#include "main.h"

/**
 * _strncat - concatène deux chaînes de caractères en utilisant au plus
 *n octets de src
 * @dest: chaîne de destination
 * @src: chaîne source
 * @n: nombre maximum d'octets à utiliser de src
 *
 * Return: un pointeur vers la chaîne résultante dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
