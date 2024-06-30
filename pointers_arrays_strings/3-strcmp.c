#include "main.h"

/**
 * _strcmp - compare deux chaînes de caractères
 * @s1: première chaîne à comparer
 * @s2: deuxième chaîne à comparer
 *
 * Return: un entier négatif si s1 < s2, 0 si s1 == s2,
 * un entier positif si s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
