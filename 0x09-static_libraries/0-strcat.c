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
 * _strcat - concatenates two strings.
 * @dest: appended to str
 * @src: appended str
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int ldst, lsrc, i, j;

	ldst = _strlen(dest);
	lsrc = _strlen(src);
	i = ldst;
	j = 0;

	while (i < ldst + lsrc)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
