#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
const char *message = "abcdefghijklmnopqrstuvwxyz";
const char *message1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ\n";

while (*message)
{
putchar(*message);
message++;
}
while (*message1)
{
putchar(*message1);
message1++;
}

return (0);
}
