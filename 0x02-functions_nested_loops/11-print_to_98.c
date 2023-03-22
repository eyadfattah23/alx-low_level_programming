#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print numbers from n to 98
 * @n: number to start from
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		printf("98");
	}
	else if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("%d", n);
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("%d", n);
	}
}
