#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: number to change
 * @index: the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = 1;

	if (index >= sizeof(*n) * 8 || !n)
		return (-1);

	while (index--)
		m *= 2;

	if (m > *n)
		return (-1);
	else if (*n == 0)
		*n = 0;
	else
		*n = *n - m;
	return (1);
}
