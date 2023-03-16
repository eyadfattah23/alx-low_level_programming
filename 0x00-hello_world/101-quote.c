#include <stdio.h>
#include <string.h>
/**
 * main - printing using putchar
 */
int main(void)
{
	char str[]="and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	for(int i = 0; i<strlen(str); i++)
	{
		putchar(str[i]);
	}
	return (1);
}
