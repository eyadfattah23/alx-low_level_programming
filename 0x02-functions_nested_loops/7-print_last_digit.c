#include "main.h"
/**
 * print_last_digit - print last digit of number 
 * @n: num to get last digit from
 * Return: n % 10 (success)
 */
int print_last_digit(int n)
{
	int num;

	if (n < 0)
	{
		n *= -1;
	}
	num = n % 10;
	if (num < 0)
	{
		num *= -1;
	}
	_putchar(num + '0');
	return (num);
}
