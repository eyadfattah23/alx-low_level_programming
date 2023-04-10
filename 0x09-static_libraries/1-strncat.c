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
 * _strncat - concatenates two strings.
 * @dest: appended to str
 * @src: appended str
 * @n: num of appended chars
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int ldst, lsrc, i, j;

	ldst = _strlen(dest);
	lsrc = _strlen(src);
	i = ldst;
	j = 0;

	while ((i < ldst + lsrc) && (i < ldst + n))
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	return (dest);
}
