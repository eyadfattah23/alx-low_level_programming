#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src
 * @src: copied str
 * @dest: place to paste
 *
 * Return: pasted string from src
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0, j;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		dest[j] = src[j];
	}
	dest[i] = '\0';

	return (dest);
}
