#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: number to get the factorial of
 * Return: factorial of the given number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
