#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap 2 int with pointer
 *
 * @a: first int to be swap
 *
 * @b: second int to be swap
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;
}
