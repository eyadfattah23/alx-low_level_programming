#include "main.h"
/**
 * create_array - Create a array object
 * @size: arr size
 * @c: char
 * Return: array object
 */

char *create_array(unsigned int size, char c)
{
	char *arr = malloc(sizeof(char) * size);
	unsigned int i = 0;

	if (size == 0 || arr == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		arr[i++] = c;
	}
	return (arr);
}
