#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standard output.
 * @filename: file to read
 * @letters: the number of letters it should read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	char *buffer = malloc(letters + 1);
	ssize_t r_chars;
	ssize_t w_chars;

	if (!filename || !buffer)
	{
		return (0);
	}
	f = open(filename, O_RDONLY);
	if (f < 0)
	{
		free(buffer);
		close(f);
		return (0);
	}
	r_chars = read(f, buffer, letters);
	if (r_chars < 0)
	{
		free(buffer);
		close(f);
		return (0);
	}
	buffer[r_chars] = '\0';
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
