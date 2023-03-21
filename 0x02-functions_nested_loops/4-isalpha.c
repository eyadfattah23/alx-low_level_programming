#include "main.h"
/**
 * _isalpha - check if c is letter or not
 * @c: char to be checked
 * Return: 1 if letter, else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
