#include "main.h"

/**
 * string_toupper - convertit toutes les lettres minuscules d'une chaîne
 * en majuscules
 * @str: chaîne de caractères à modifier
 *
 * Return: un pointeur vers la chaîne modifiée
 */
char *string_toupper(char *str)
{
	char *s = str;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
		{
			*s = *s - ('a' - 'A');
		}
		s++;
	}

	return (str);
}
