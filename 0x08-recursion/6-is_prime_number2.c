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
int divisor = 3;
int is_prime_number(int n, int divisor){
	if (n == 1 || n == 0)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	if (n % 2 == 0 || n % 3 == 0)
	{
		return (0);
	}
	else
	{
		if (divisor > _sqrt_recursion(n))
		{
			return (1);
		}
		else
		{
			if (n % divisor == 0)
			{
				return (0);
			}
			else
			{
				return (is_prime_number(n,divisor+1));
			}
			
			
		}
		
		
	}
	
	
	
	
}
