#include "main.h"

/**
 * wildcmp - compares two strings for exact match
 * @s1: first string to compare
 * @s2: second string to compare, contain'*'
 *
 * Return: 1 if the strings are identical, otherwise 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 == '\0')
			return (1);
		if (*s2 == '*')
			return (wildcmp(s1, s2 + 1));
		return (0);
	}
	if (*s2 == '*')
	{
		if (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1))
			return (1);
		return (0);
	}
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}
