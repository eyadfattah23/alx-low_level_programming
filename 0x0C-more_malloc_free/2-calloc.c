#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: num of elements in the array
 * @size: element size
 * Return: pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
	{
		*(p + i) = 0;
	}
	return (p);
}
