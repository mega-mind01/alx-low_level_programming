#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print string input to stdout
 *
 * @separator: inbetween strings
 * @n: number of arguement
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *ptr;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		ptr = va_arg(args, char *);
		if (ptr != NULL)
			printf("%s", ptr);
		else
			printf("(nil)");
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
