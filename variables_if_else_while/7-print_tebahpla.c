#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
const char *message = "zyxwvutsrqponmlkjihgfedcba\n";

while (*message)
{
putchar(*message);
message++;
}

return (0);
}
