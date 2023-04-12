#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: string to be measured
 * Return: len of string;
 */

int _strlen(char *s)
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
 * str_concat - concatenates two strings.
 * @s1: the string to concatenate
 * @s2: the string to conc
 * Return: the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int lens1 = _strlen(s1);
	int lens2 = _strlen(s2);
	int i = 0, j = 0;
	char *result = malloc(lens1 + lens2 + 1);

	if (result == NULL)
	{
		return (NULL);
	}


	while (i < lens1)
	{
		result[i] = s1[i];
		i++;
	}
	while (j < lens2)
	{
		result[i] = s2[j];
		i++;
		j++;
	}
	result[i] = '\0';
	return (result);
}
