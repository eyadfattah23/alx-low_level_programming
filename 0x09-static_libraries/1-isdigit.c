#include "main.h"
/**
 * _isdigit - check if char is digit or not
 * @c: is the char getting checked
 * Return: 1 if char, otherwise 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
