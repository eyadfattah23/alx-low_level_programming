#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: the string to be searched
 * @c: char to be found
 * Return: pointer to the first occurrence of the character c(success),
 * NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (s && (*s != '\0'))
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
