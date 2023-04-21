#include "variadic_functions.h"

/**
 * print_numbers - print numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * @...: arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
		{
			printf("%d ", va_arg(args, int));
		}
		else
		{
			if (i == n - 1)
			{
				printf("%d\n", va_arg(args, int));
			}
			else
			{
				printf("%d%s", va_arg(args, int), separator);
			}
		}
	}
}
