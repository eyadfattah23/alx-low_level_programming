#include "search_algos.h"

/**
 * binary_search_helper - helper function for binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @l: pointer to low
 * @h: pointer to high
 * @value: the value to search for
 * Return: index where value is located,
 * If value is not present in array or if array is NULL
 * return -1
 */
int binary_search_helper(int *array, int l, int h, int value)
{
	int mid = l + (h - l) / 2;
	int i;

	if (l <= h)
	{
		printf("Searching in array: ");
	}

	for (i = l; i <= h; i++)
	{
		if (i == h)
		{
			printf("%i\n", array[i]);
		}
		else
		{
			printf("%i, ", array[i]);
		}
	}

	if ((l <= h) && array[mid] == value)
		return (mid);

	else if ((l <= h) && value < array[mid])
		return (binary_search_helper(array, l, mid - 1, value));

	else if ((l <= h) && value > array[mid])
		return (binary_search_helper(array, mid + 1, h, value));

	return (-1);
}

/**
 * binary_search - searches for value in sorted array using the Binary search
 * @array: pointer to the first element of the array to search in
 * @size: size of the array
 * @value: the value to search for
 * Return: index where value is located,
 * If value is not present in array or if array is NULL
 * return -1
 */
int binary_search(int *array, size_t size, int value)
{
	if (!array || size == 0)
	{
		return (-1);
	}

	return (binary_search_helper(array, 0, size - 1, value));
}
