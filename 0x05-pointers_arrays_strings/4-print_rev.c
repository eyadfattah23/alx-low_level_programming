#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: str to be printed
 */

void print_rev(char *s)
{
	int i = 0;

	if (*s == "")
	{
		_putchar('\n');
	} else
	{
	while (*(s + i) != '\0')
	{
		i++;
	}
	i--;
	while (i > 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar(*s);
	_putchar('\n');
	}
}