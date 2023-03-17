#include <stdio.h>
/**
 * main - printf to print string
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = '1' - '0'; i <= '9' - '0'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
