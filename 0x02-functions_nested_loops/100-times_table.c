#include "main.h"
/**
 * print_times_table- print the 9 times table, starting with 0.
 * @n: the times table end
 */
void print_times_table(int n)
{
	int gad, i, res;

	if (n >= 0 && n <= 15)
	{
		for (gad = 0; gad <= n; gad++)
		{
			for (i = 0; i <= n; i++)
			{
				res = gad * i;
				if (i == 0)
				{
					_putchar(res + '0');
				}
				if (res >= 10 && res < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((res / 10) + '0');
					_putchar((res % 10) + '0');
				}
				else if (res >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((res / 100) + '0');
					_putchar(((res / 10) % 10) + '0');
					_putchar((res % 10) + '0');
				}
				else if (res < 10 && i != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(res + '0');
				}
			}
			_putchar('\n');
		}
	}
}
