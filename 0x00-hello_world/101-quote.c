#include <stdio.h>
#include <unistd.h>
/**
 * main - printing using putchar
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, str, 59);
	return (1);
}
