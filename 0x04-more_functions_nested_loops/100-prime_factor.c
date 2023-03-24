#include <stdio.h>
#include <math.h>

/**
 * main - finds the largest prime factor of the number 612852475143
 * Return: 0 success
 */
int main(void)
{
	int i;
	unsigned long n = 612852475143;

	for (i = 2; i <= sqrt(n); i++)
	{
		while (n % i == 0)
		{
			n /= i;
		}
	}
	printf("%ld\n", n);
	return (0);
}
