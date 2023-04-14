#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: start 
 * @max: end
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *p, i, j;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc(sizeof(int) * (max - min + 1));
	j = min;
	if (p == NULL) return (NULL);
	for (i = 0; i < max - min + 1; i++)
	{
		p[i] = j;
		j++;
	}
	return (p);
}
