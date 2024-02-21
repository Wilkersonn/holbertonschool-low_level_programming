#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
const char *message = "abcdefghijklmnopqrstuvwxyz\n";
const char *ptr = message;

while (*ptr)
{
if (*ptr != 'q' && *ptr != 'e')
{
putchar(*ptr);
}
ptr++;
}

return (0);
}
