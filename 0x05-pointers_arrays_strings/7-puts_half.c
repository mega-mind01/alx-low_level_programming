#include "main.h"

/**
 * puts_half - prints half of input
 *
 * @str: string input
 */

void puts_half(char *str)
{
	int len = 0;
	char *result = str;
	int n;

	while (*result != '\0')
	{
		result++;
		len++;
	}
	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len + 1) / 2;
	}
	for (; n < len; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
