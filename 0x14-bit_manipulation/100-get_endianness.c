#include "main.h"

/**
 * get_endianness - checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int x = 0x01234567;
	char *c = (char *)&x;

	if (*c == 0x67)
		return (1);
	return (0);
}
