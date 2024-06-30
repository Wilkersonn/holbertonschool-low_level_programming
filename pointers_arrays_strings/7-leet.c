#include "main.h"

/**
 * leet - encode une chaîne en 1337
 * @str: chaîne de caractères à encoder
 *
 * Return: un pointeur vers la chaîne modifiée
 */
char *leet(char *str)
{
	int i;
	char leet_chars[] = "aAeEoOtTlL";
	char leet_replacements[] = "430701";

	for (i = 0; str[i] != '\0'; i++)
	{
		int j = 0;

		while (leet_chars[j] != '\0')
		{
			if (str[i] == leet_chars[j])
			{
				str[i] = leet_replacements[j];
				break;
			}
			j++;
		}
	}

	return (str);
}
