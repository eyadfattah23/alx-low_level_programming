#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: string to be measured
 * Return: len of string;
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, l = 0, wb;

	if (!filename)
		return (-1);

	file = open(filename, O_APPEND | O_WRONLY);
	if (file == -1)
		return (-1);

	if (!text_content)
	{
		close(file);
		return (1);
	}

	l = _strlen(text_content);

	wb = write(file, text_content, l);
	if (wb == -1)
		return (-1);

	close(file);
	return (1);
}
