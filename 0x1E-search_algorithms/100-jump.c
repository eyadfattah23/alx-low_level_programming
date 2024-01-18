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
	size_t i, next, j;

	if (!array || !size)
		return (-1);

	for (i = 0; i < size; i += sqrt(size))
	{
		next = i + sqrt(size);

		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (value <= array[next])
		{
			printf("Value found between indexes [%lu] and [%lu]\n", i, next);
			for (j = i; j <= next; j++)
			{
				if (array[j] <= value)
					printf("Value checked array[%lu] = [%d]\n", j, array[j]);

				if (value == array[j])
					return (j);

				else if (array[j] > value)
					return (-1);
			}
		}
	}
	printf("Value found between indexes [%lu] and [%lu]\n", size - 1, next);
	printf("Value checked array[%lu] = [%d]\n", size - 1, array[size - 1]);

	return (-1);
}
