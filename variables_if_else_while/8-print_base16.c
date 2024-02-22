#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char hex_chars[] = "0123456789abcdef";

int i;
for (i = 0; i < 16; i++)
{
putchar(hex_chars[i]);
}

putchar('\n');

return (0);
}
