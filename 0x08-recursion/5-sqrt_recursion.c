#include "main.h"

/**
 * _sqrt_helper - calculates a new guess using the Newton-Raphson formula
 * @n: the number to be square rooted
 * @guess: initial guess of the sqrt of n
 * Return: natural square root of a number.
 */
int _sqrt_helper(int n, int guess)
{
	int new_guess = (guess + n / guess) / 2;

	if (new_guess == guess)
	{
		return (guess);
	}
	else
	{
		return (_sqrt_helper(n, new_guess));
	}
}

/**
 * _sqrt_recursion - returns square root of a number
 * @n: number to be rooted
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	} else if (n == 0)
	{
		return (0);
	}
		return (_sqrt_helper(n, 1));
}
