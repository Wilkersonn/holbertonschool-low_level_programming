#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
const char *message = "_putchar\n";

while (*message)
{
_putchar(*message);
message++;
}

return (0);
}
