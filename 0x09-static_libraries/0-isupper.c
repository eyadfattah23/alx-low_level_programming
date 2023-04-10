#include "main.h"
/**
 * _isupper - check if char is upper or not
 * @c: is the char getting checked
 * Return: 1 if upper, otherwise 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
