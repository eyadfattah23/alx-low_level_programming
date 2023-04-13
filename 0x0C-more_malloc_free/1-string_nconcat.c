#include "main.h"

#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: string to be measured
 * Return: len of string;
 */

unsigned int _strlen(char *s)
{
	int i = 0;

	if (s == NULL)
	{
		return (0);
	}
	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * string_nconcat - concatenates two strings.
 * @s1: concatenated to string
 * @s2: concatenated from str
 * @n: bytes of s2 to concat
 * Return: pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int l1, l2, i = 0, j = 0;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	l1 = _strlen(s1);
	if (n >= _strlen(s2))
	{
		l2 = _strlen(s2);
	} else
	{
		l2 = n;
	}
	result = malloc(l1 + l2 + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	while (i < l1)
	{
		result[i] = s1[i];
		i++;
	}
	while (j < l2)
	{
		result[i] = s2[j];
		i++;
		j++;
	}
	result[i] = '\0';
	return (result);
}
