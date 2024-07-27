#include "search_algos.h"
/**
 * jump_search - searches for value in sorted array using the Jump search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located,
 * If value is not present in array or if array is NULL return -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size), i, j, k;

	if (!size || !array)
		return (-1);

	if (value < array[0])
		return (-1);

	for (i = 0, j = step; i < size; i += step, j += step)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);

		if (value >= array[i] && value <= array[j])
		{
			printf("Value found between indexes [%lu] and [%lu]\n", i, j);
			for (k = i; k <= j; k++)
			{
				printf("Value checked array[%lu] = [%i]\n", k, array[k]);
				if (value == array[k])
				{
					return (k);
				}
			}
		}
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
		   size - 1, size - 1 + step);
	return (-1);
}
