#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each
 * element of an array.
 * @array: the array
 * @size: the number of elements
 * @action: the action function to execute on each element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (!action || array == NULL || size == 0)
	{
		return;
	}
	for (i = 0; i < (int)size; i++)
	{
		action(array[i]);
	}
}
