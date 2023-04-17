#include "main.h"

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to memory block
 * @old_size: size of old memory block
 * @new_size: size of new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *old_ptr;
	int m, i;

	if (new_size <= old_size)
	{
		m = new_size;
	} else
	{
		m = old_size;
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (!ptr)
	{
		return (malloc(new_size));
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	if (!new_ptr)
	{
		return (NULL);
	}
	old_ptr = ptr;
	for (i = 0; i < m; i++)
	{
		new_ptr[i] = old_ptr[i];
	}
	free(ptr);
	return (new_ptr);
}
