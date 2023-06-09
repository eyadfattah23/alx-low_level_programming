#include "main.h"

/**
 * buffer_creat - creates a 1024 byte buffer
 * @str: argv[1]
 * Return: pointer to the buffer
 */
void *buffer_creat(char *str)
{
	char *buffer = malloc(1024);

	if (!buffer)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
		exit(98);
	}
	return (buffer);
}
/**
 * close_check - closes open descriptor
 * @fd: file descriptor
 */
void close_check(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i", fd);
		exit(100);
	}
	close(fd);
}
/**
 * main - copies the content of a file to another file.
 * @argc: args count
 * @argv: args vector
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, rb, wb;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	buffer = buffer_creat(argv[1]);
	do {
		rb = read(file_from, buffer, 1024);
		if (file_from == -1 || rb == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		wb = write(file_to, buffer, rb);
		if (file_to == -1 || wb == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
	} while (rb > 0);

	free(buffer);
	close_check(file_from);
	close_check(file_to);
	return (0);
}
