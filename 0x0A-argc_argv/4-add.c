#include <stdio.h>
#include <stdlib.h>
/**
 * main - add 2 nums
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 3)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) > 0)
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
		printf("%d\n", sum);
	return (0);
}
