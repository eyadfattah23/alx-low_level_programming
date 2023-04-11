#include <stdio.h>
/**
 * main - print count of args
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc-1);
	return (0);
}
