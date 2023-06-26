#include "main.h"

/**
 * puts_half - prints half of input
 *
 * @str: string input
 */

void puts_half(char *str)
{
	int len = strlen(str);
	int start;
	char *result;

	if (len % 2 == 0)
	{
		start = len / 2;
	}
	else
	{
		start = (len + 1) / 2;
		result = str + start;
	}
	while (*result != '\0')
	{
		_putchar(*result);
		result++;
	}
	_putchar('\n');
}
