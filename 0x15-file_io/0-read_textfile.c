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
	int f;
	char *buffer;
	ssize_t r_chars;
	ssize_t w_chars;


	f = open(filename, O_RDONLY);
	if (f < 0)
	{
		return (0);
	}
	buffer = malloc(letters);
	r_chars = read(f, buffer, letters);
	if (r_chars < 0)
	{
		free(buffer);
		close(f);
		return (0);
	}
	w_chars = write(1, buffer, r_chars);
	if (w_chars < 0 || w_chars != r_chars)
	{
		free(buffer);
		close(f);
		return (0);
	}
	free(buffer);
	close(f);
	return (r_chars);
}
