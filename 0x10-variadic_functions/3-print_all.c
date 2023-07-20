#include <stdio.h>
#include <stdarg.h>
#include <string.h>
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
	const char *ptr = format;

	va_start(args, format);

	while (*ptr)
	{
		if (*ptr == 'c')
		{
			int ch = va_arg(args, int);

			printf("%c, ", ch);
		}
		else if (*ptr == 'i')
		{
			int in = va_arg(args, int);

			printf("%d, ", in);
		}
		else if (*ptr == 'f')
		{
			double flo = va_arg(args, double);

			printf("%f, ", flo);
		}
		else if (*ptr == 's')
		{
			char *str = va_arg(args, char *);

			if (str != NULL)
				printf("%s, ", str);
			while (str == NULL)
				printf("(nil)");
		}
		ptr++;
	}
	printf("\n");
	va_end(args);
}

