#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: the string that will be measured
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	int l = 1;

	if (*s == '\0')
	{
		return (0);
	}
	return (l + _strlen_recursion(s + 1));
}
