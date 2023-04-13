#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money.
 *
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0 success, 1 failure
 */

int main(int argc, char *argv[])
{
	int c, sum = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	c = atoi(argv[1]);
	if (c < 1)
	{
		printf("0\n");
		return (0);
	}
	if (c >= 25)
	{
		sum += (c / 25);
		c = c % 25;
	}
	if (c >= 10)
	{
		sum += (c / 10);
		c = c % 10;
	}
	if (c >= 5)
	{
		sum += (c / 5);
		c = c % 5;
	}
	if (c >= 2)
	{
		sum += (c / 2);
		c = c % 2;
	}
	if (c >= 1)
	{
		sum += (c / 1);
	}
	printf("%d\n", sum);
	return (0);
}
