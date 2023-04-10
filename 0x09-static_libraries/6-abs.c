#include "main.h"
/**
 * _abs - print absolute n
 * @n: num to be changed
 * Return: n (success)
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n *= -1;
		return (n);
	}
}
