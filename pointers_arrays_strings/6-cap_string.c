#include "main.h"

/**
 * cap_string - capitalise le premier caractère de chaque mot
 * dans une chaîne
 * @str: chaîne de caractères à modifier
 *
 * Return: un pointeur vers la chaîne modifiée
 */
char *cap_string(char *str)
{
	int i;
	int capitalize = 1;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == ',' || str[i] == ';' || str[i] == '.' ||
			str[i] == '!' || str[i] == '?' || str[i] == '"' ||
			str[i] == '(' || str[i] == ')' || str[i] == '{' ||
			str[i] == '}')
		{
			capitalize = 1;
		}
		else if (capitalize && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - ('a' - 'A');
			capitalize = 0;
		}
		else
		{
			capitalize = 0;
		}
	}

	return (str);
}
