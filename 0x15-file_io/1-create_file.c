#include "main.h"

/**
 * create_file - creates a file.
 * @filename: name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int f, w_chars, l = 0, i = 0;

	if (!filename)
	{
		return (-1);
	}
	while (*(text_content+ i))
	{
		len++;
		i++;
	}
	
}
