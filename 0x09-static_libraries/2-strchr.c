#include "main.h"
#include <stddef.h>

/**
 * _strchr - search for a character in a str
 * @s: string to search in
 * @c: char to be located
 * Return: 0 (success)
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);

}
