#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *factorial - main fontion that returns the factorial of a given number
 *@n: it's the numbers
 *
 *Return: return
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
