#include "main.h"
#include <stdio.h>
/**
 * main - print sum nums under 1024 that are divisible by 3 or 5
 * Return: 0 (success)
 */
int main(void)
{
	int i, sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
