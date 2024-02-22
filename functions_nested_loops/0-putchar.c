#include <stdio.h>

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
putchar(*message);
message++;
}

return (0);
}
