#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: the name
 * @f: the function address(the function that will be called
 * to print)
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
