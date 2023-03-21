#include "main.h"
/**
 * print_last_digit - print to print string
 * @n: num to get last digit from
 * Return: n % 10 (success)
 */
int print_last_digit(int n)
{
	if (n == INT_MIN)
	{
		_putchar(-(n % 10) + '0');
	}
	if (n < 0)
	{
		n *= -1;
	}
	_putchar((n % 10) + '0');
	return (n % 10);
}
