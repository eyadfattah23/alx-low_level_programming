#include "main.h"

/**
 * _pow_recursion - returns the value of x power of y
 * @x: base
 * @y: power
 * Return: the value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	int p = y;

	if (y < 0)
	{
		return (-1);
	}
	if (p == 0)
	{
		return (1);
	}
	p--;
	return (x * _pow_recursion(x, p));
}
