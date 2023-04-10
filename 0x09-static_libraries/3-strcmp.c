#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: str to be compared
 * @s2: str to be compared
 * Return: difference in ascii value
 */
int _strcmp(char *s1, char *s2)
{
	int i, res = 0;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			res = s1[i] - s2[i];
			break;
		}
		i++;
	}
	return (res);
}
