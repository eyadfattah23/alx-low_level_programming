#include "main.h"

/**
 * is_prime_helper - helper function to recursively check if n is prime
 * @n: the integer to check
 * @divisor: the current divisor to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_helper(int n, int divisor)
{
	if (divisor * divisor > n)
	{
		return (1);  /* n is prime if no divisor <= sqrt(n) is found */
	}
	else if (n % divisor == 0 || n % (divisor + 2) == 0)
	{
		return (0);  /* n is not prime if divisible by divisor or divisor+2 */
	}
	else
	{
		return (is_prime_helper(n, divisor + 6));  /* check next possible divisor */
	}
}

/**
 * is_prime_number - checks if a given integer is a prime number
 * @n: the integer to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);  /* 1 and negative numbers are not prime */
	}
	else if (n <= 3)
	{
		return (1);  /* 2 and 3 are prime */
	}
	else if (n % 2 == 0 || n % 3 == 0)
	{
		return (0);  /* multiples of 2 and 3 are not prime */
	}
	else
	{
		return (is_prime_helper(n, 5));  /* start recursion with divisor 5 */
	}
}
