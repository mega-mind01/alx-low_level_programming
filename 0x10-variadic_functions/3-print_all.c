#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - print varrying number of arguement
 *
 * @format: input type
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *ptr, *sep = "";
	int a = 0;

	va_start(args, format);

	if (format)
	{
		while (format[a])
		{
			switch ([a])
			{
				case 'c':
					printf("%s%c", sep, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(args, double));
					break;
				case 's':
					ptr = va_arg(args, char *);
					if (!ptr)
						ptr = "(nil)";
					printf("%s%s", sep, ptr);
					break;
				default:
					a++;
					continue;
			}
			sep = ", ";
			a++;
		}
	}
	printf("\n");
	va_end(args);
}
