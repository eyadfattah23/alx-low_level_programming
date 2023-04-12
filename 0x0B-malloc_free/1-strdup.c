#include "main.h"

/**
 * _strdup - returns a pointer to a copy of the string
 * @str: the string to copy
 * Return: a pointer to a copy of the string
 */
char *_strdup(char *str)
{
	int i = 0;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	i++;
	p = malloc(sizeof(char) * i);
	i = 0;
	if (p == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		p[i] = str[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
