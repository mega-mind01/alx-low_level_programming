#include "main.h"

/**
 *print_rev - reverse given string
 *
 *@s: string input
 */

void print_rev(char *s)
{
	int len = 0;
	int i;
	char *ptr = s;

	while (*ptr != '\0')
	{
		len++;
		ptr++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		char c = *(s + i);

		_putchar(c);
	}
	_putchar('\n');
}
