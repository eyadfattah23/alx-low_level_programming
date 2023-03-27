#include "main.h"

/**
 * puts_half - print the second half of the string
 * @str: string to be printed from
 */

void puts_half(char *str)
{
	int len = 0, n;

	while (*(str + len) != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len - 1) / 2;

	while (n < len)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
