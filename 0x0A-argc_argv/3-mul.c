#include <stdio.h>
#include <stdlib.h>
/**
 * main - print all args
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		mul *= atoi(argv[i]);
	}
		printf("%d\n", mul);
	return (0);
}
