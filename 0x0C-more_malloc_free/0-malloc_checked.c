#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: amount of memory to allocate
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	if (malloc(b) == NULL)
	{
		exit(98);
	}
	return (malloc(b));
}
