#include "main.h"

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
int close_check(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i", fd);
		exit(100);
	}
	close(fd);
}
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
	buffer = buffer_creat(argv[1]);
	rb = read(file_from, buffer, 1024);
	if (file_from == -1 || rb == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		close(file_from);
		exit(98);
	}

	file_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	wb = write(file_to, buffer, rb);
	if (file_to == -1 || wb == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buffer);
		close(file_from);
		close(file_to);
		exit(99);
	}

	free(buffer);
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i", file_from);
		exit(100);
	}
	close(file_from);
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i", file_to);
		exit(100);
	}
	close(file_to);
	return (0);
}
