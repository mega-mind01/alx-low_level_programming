#include "main.h"

/**
 * puts_half - prints half of input
 *
 * @str: string input
 */

void puts_half(char *str)
{
	int len = 0;
	char *result;

	while (*str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		result = str + len / 2;
	}
	else
	{
		result = str + (len + 1) / 2;
	}
	_putchar('\n');
}
