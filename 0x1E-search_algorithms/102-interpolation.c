#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array of integers
 *                        using the interpolation search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where the value is located, or -1 if the value
 *         is not present or if the array is NULL.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t high = size - 1, low = 0, pos;

	if (!array || size == 0)
		return (-1);

	while (value >= array[low] && value <= array[high] && low <= high)
	{
		pos = low + (((double)(high - low) /
					  (array[high] - array[low])) *
					 (value - array[low]));

		if (pos > size - 1)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%lu] = [%i]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);

		else if (array[pos] < value)
			low = pos + 1;

		else
			high = pos - 1;
	}
	pos = low + (((double)(high - low) /
				  (array[high] - array[low])) *
				 (value - array[low]));

	printf("Value checked array[%lu] is out of range\n", pos);

	return (-1);
}
