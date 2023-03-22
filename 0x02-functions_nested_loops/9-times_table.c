#include "main.h"
/**
 * times_table- print the 9 times table, starting with 0.
 */
void times_table(void)
{
	int gad, i, res;

	for (gad = 0; gad <= 9; gad++)
	{
		for (i = 0; i <= 9; i++)
		{
			res = gad * i;
			if (i == 0)
			{
				_putchar(res + '0');
			}
			if (res >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
			else if (res < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(res + '0');
			}
		}
		_putchar('\n');
	}
}
