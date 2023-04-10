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
 * _strncpy - copies up to n characters from the string.
 * @dest: where the content is to be copied.
 * @src: This is the string to be copied.
 * @n: the number of characters to be copied from source.
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int lsrc = _strlen(src), i = 0;

	while (i < lsrc && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{	dest[i] = '\0';
		i++;
	}
	return (dest);
}
