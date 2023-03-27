#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: num to be swapped
 * @b: num to be swapped
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
