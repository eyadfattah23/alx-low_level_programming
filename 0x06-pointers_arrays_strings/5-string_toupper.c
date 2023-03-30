#include "main.h"

/**
 * _islower - check if char is lower or not
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

/**
 * _strlen - returns the length of a string.
 * @s: string to be measured
 * Return: len of string;
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * string_toupper - string to uppercase.
 * @s: str to be changed
 * Return: changed str
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; i < _strlen(s); i++)
	{
		if (_islower(s[i]))
		{
			s[i] -= 32;
		}
	}
	return (s);
}
