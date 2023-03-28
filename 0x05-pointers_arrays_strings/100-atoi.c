#include <stdio.h>
#include "main.h"
/**
 * _atoi - convert a string to an integer.
 * @s: str to be converted
 *
 * Return: integer after conversion
 */

int _atoi(char *s)
{
	int len = 0, res = 0, neg = 0, i, neg2;

	while (*(s + len) != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		if (s[i] == '-')
			neg++;
		if (s[i] >= '0' && s[i] <= '9')
		{
			neg2 = neg;
			res = res * 10 + (s[i] - '0');
			if (s[i + 1] < '0' || s[i + 1] > '9')
			{
				break;
			}
		}
	}
	if (neg2 % 2 == 1)
		res *= -1;

	return (res);
}
