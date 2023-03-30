#include "main.h"

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
 * cap_string - capitalizes all words of a string.
 * @s: str to be converted
 * Return: converted str
 */
char *cap_string(char *s)
{
	int i;

	for (i = 1; i < _strlen(s); i++)
	{
		while (!(_islower(s[i])))
			i++;
		if (
			(
			s[i - 1] == ' ' ||
			s[i - 1] == '\n' ||
			s[i - 1] == '\t' ||
			s[i - 1] == '\n' ||
			s[i - 1] == ',' ||
			s[i - 1] == ';' ||
			s[i - 1] == '.' ||
			s[i - 1] == '!' ||
			s[i - 1] == '?' ||
			s[i - 1] == '"' ||
			s[i - 1] == '(' ||
			s[i - 1] == ')' ||
			s[i - 1] == '{' ||
			s[i - 1] == '}'
			)
		)
		{
			s[i] -= 32;
		}
	}
	return (s);
}
