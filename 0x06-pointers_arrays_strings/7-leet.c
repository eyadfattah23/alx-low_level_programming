#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @s: str to be encoded
 * Return: encoded string
 */

char *leet(char *s)
{
	char *e = "aAeEoOtTlL";
	char *es = "4433007711";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == e[j])
				s[i] = es[j];
		}
	}
	return (s);
}
