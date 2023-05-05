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
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number to search in
 * @index: the index
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bin_arr[32];
	unsigned int j, i = 0;

	while (n > 0)
	{
		bin_arr[i] = n % 2;
		n /= 2;
		i++;
	}
	for (j = i - 1; j >= index; j--)
	{
		if (j == index)
		{
			return (bin_arr[j]);
		}
	}
	return (-1);
}
