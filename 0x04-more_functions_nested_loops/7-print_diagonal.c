#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n:  number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n < 1)
	{
	_putchar('\n');
	}
}
