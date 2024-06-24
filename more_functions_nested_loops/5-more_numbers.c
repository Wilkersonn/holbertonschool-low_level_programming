#include "main.h"

/**
 * more_numbers - prints the numbers from 0 to 9, followed by a new line
 */
void more_numbers(void)
{
	char numbers[] = "01234567891011121314";
	int i;
	int kendrick;

	kendrick = 0;

	while (kendrick < 10)
	{
		for (i = 0; i < 20; i++)
		{
			_putchar(numbers[i]);
		}
		_putchar('\n');
		kendrick++;
	}
}
