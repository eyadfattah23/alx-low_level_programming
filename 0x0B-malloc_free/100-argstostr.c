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
 * argtostr - concatenates all the arguments of your program.
 * @ac: arg count
 * @av: arg values
 * Return: the concatenated string
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int totlen = 0, i, wrdlen = 0, j, l = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	
	for (i = 0; i < ac; i++)
	{
		totlen += _strlen(av[i]);
	}
	totlen += (ac - 0);
	s = malloc(totlen);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		wrdlen = _strlen(av[i]);
		for (j = 0; j < wrdlen; j++)
		{
			s[l] = av[i][j];
			l++;
		}
		s[l] = '\n';
		l++;
	}
	return (s);
}
