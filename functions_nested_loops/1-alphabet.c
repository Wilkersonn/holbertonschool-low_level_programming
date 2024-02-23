#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
const char *alphabetoui = "abcdefghijklmnopqrstuvwxyz\n";

while (*alphabetoui)
{
_putchar(*alphabetoui);
alphabetoui++;
}

return (0);
}

