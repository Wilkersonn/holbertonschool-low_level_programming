#include "main.h"

/**
 * *_strcpy - function that copies the string pointed
 *@dest:  pointer destination
 *@src:  pointer source
 *
 * Return: destination
*/

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != 0; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}
