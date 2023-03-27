#include "main.h"

/**
 * puts2 -  prints every other character of a string
 * @str: str to be printed from
 */

void puts2(char *str)
{
	int i = 0, j;

	while (*(str + i) != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j += 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
