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

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array to be reversed
 * @n: size of array
 */

void reverse_array(int *a, int n)
{
	int i, j = n - 1;

	for (i = 0; i < j; i++, j--)
	{
		swap_int(&a[i], &a[j]);
	}

}
