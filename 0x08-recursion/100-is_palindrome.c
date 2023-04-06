#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
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

/**
 * is_palindrome_helper - check whether a str is a palindrome
 * @s: the string to be checked
 * @t: reversed s
 * Return: 1 if the string is a palindrome, otherwise 0
 */
int is_palindrome_helper(char *s, char *t)
{
	if (s > t)
	{
		return (1);
	}

	if (*s != *t)
	{
		return (0);
	}
	else
	{
		return (is_palindrome_helper(++s, --t));
	}
}

/**
 * is_palindrome - check whether a str is a palindrome
 * @s: the string to be checked
 * Return: 1 if the string is a palindrome, otherwise 0
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		char *t = s + _strlen_recursion(s) - 1;

		return (is_palindrome_helper(s, t));
	}
}
