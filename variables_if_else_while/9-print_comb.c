#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int javaisimplementenviedemettreunevariableextremementlongue = 0;

	while (javaisimplementenviedemettreunevariableextremementlongue < 10)
	{
		putchar(javaisimplementenviedemettreunevariableextremementlongue + '0');
		if (javaisimplementenviedemettreunevariableextremementlongue != 9)
		{
			putchar(',');
			putchar(' ');
		}
		javaisimplementenviedemettreunevariableextremementlongue++;
	}

	putchar('\n');

	return (0);
}
