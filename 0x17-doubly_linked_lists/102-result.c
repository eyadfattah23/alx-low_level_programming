#include <stdio.h>

int is_palindrome(unsigned int num)
{
	unsigned int nn = 0;
	unsigned int onum = num;
	unsigned int m = 1;
	while (onum)
	{
		m*= 10;
		onum /= 10;
	}
	m/= 10;
	onum = num;
	while (m)
	{
		nn += m * (onum % 10);
		m /= 10;
		onum /= 10;
	}
	
	if (nn == num)
		return 1;

	else
		return 0;

}

int main(void)
{
	int i, j;

	unsigned long max = 0;
	for (i = 100; i <= 998; i++)
	{
		for (j = i; j <= 999 ; j++)
		{
			if ((i * j > max) && is_palindrome(i*j))
			{
				max = i * j;
			}
		}
	}
	printf("%ld", max);
	return 0;
}
