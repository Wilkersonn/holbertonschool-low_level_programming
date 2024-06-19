#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This is the entry point of the code
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int var;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	var = n % 10;
	printf("Last digit of %d is %d ", n, var);


	if (var > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (var == 0)
	{
		printf("and is 0\n");
	}
	else if (var < 6 && var != 0)
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
