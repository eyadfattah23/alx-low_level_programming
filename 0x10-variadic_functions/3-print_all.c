#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: list of types of arguments passed to the function
 * @...: arguments to print
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int j = 0, flag = 0, d;
	char c;
	float f;
	char *s;

	va_start(args, format);
	while (format[j] != '\0' && format != NULL)
	{
		flag = 1;
		switch (format[j])
		{
		case 'c':
			c = va_arg(args, int);
			printf("%c", c);
			break;
		case 'i':
			d = va_arg(args, int);
			printf("%d", d);
			break;
		case 'f':
			f = va_arg(args, double);
			printf("%f", f);
			break;
		case 's':
			s = va_arg(args, char *);
			if (s == NULL)
			{	printf("(nil)");
				break;
			}
			printf("%s", s);
			break;
		default:
			flag = 0;
			break;
		}
		if (flag && format[j + 1])
			printf(", ");
		j++;
	}
	printf("\n");
	va_end(args);
}
