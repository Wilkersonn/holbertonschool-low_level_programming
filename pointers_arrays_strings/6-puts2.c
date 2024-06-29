#include "main.h"
/**
 * puts2 - Fonction permettant de print str une fois sur deux
 * en commencant par "0"
 *
 * @str: string that contain "0123456789"
 * Return: rien
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	_putchar(str[i]);

	_putchar('\n');
}
