#include "main.h"

/**
 * rot13 - encodes a string into rot13.
 * @s: str to be encoded
 * Return: encoded string
 */

char *rot13(char *s)
{
	char *e = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *es = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 26 * 2; j++)
		{
			if (s[i] == e[j])
				s[i] = es[j];
			break;
		}
	}
	return (s);
}
