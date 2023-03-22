#include <stdio.h>
/**
 * main - print even nums in fib series
 * Return: 0 (success)
 */
int main(void)
{
	int sum = 0;
	int a = 1;
	int b = 2;
	int c = 0;

	while (b <= 4000000)
	{
		if (b % 2 == 0)
		{
			sum += b;
		}
		c = a + b;
		a = b;
		b = c;
	}
	printf("%d\n", sum);
	return (0);
}
