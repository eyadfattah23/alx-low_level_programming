#include "main.h"
/**
 * _islower - check if char is lower or upper
 * @c: is the char getting checked
 * Return: 1 if lower, otherwise 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
