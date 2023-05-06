#include "main.h"

/**
 * count_one - count number of 1's in a binary number
 * @n: number to check
 * Return: number of ones
 */
unsigned long int count_one(unsigned long int n)
{
	unsigned long int count = 0;

	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return (count);
}
/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: 1st number
 * @m: 2nd number
 * Return: number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;

	return (count_one(xor));
}
