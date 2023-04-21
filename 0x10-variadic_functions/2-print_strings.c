#include "variadic_functions.h"

/**
 * print_strings - print strings, followed by a new line.
 * @separator: string to be printed between strings
 * @n: number of integers passed to the function
 * @...: arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *s;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		if (separator == NULL)
		{
			if (s == NULL)
			{
				printf("(nil)");
			}
			else
				printf("%s", s);
		} else
		{
			if (i != n - 1)
			{
				if (s == NULL)
				{
					printf("(nil)%s", separator);
				} else
					printf("%s%s", s, separator);
			} else
			{
				if (s == NULL)
				{
					printf("(nil)");
				}
				else
					printf("%s", s);
			}
		}
	}
	printf("\n");
	va_end(args);
}
