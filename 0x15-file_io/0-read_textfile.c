#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standard output.
 * @filename: file to read
 * @letters: the number of letters it should read and print
 * Return: actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, rb, wb;
	char *buffer;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buffer = malloc(letters);
	if (!buffer)
	{
		close(file);
		return (0);
	}

	rb = read(file, buffer, letters);
	if (rb == -1)
	{
		free(buffer);
		close(file);
		return (0);
	}

	wb = write(1, buffer, letters);
	if (wb == -1 || (wb != rb))
	{
		free(buffer);
		close(file);
		return (0);
	}

	free(buffer);
	close(file);
	return (wb);
}
