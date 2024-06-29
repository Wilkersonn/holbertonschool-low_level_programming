#include <stdio.h>
/**
 * puts_half - Prints the second half of a string.
 * @str: Pointer to the string to be printed.
 *
 * Description:
 * This function calculates the length of the string pointed to by `str`.
 * It then determines the starting index for the second half of the string.
 * If the length of the string is even, the function starts printing from
 * `length / 2`. If the length is odd, it starts printing from
 * `(length - 1) / 2 + 1`. After determining the start index, it prints
 * each character from the start index to the end of the string, followed
 * by a newline.
 */
void puts_half(char *str)
{
	int length = 0;
	int start;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		start = length / 2;
	}
	else
	{
		start = (length - 1) / 2 + 1;
	}

	for (int i = start; i < length; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
