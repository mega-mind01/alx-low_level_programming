#include "main.h"

/**
 * puts_half - prints half of input
 *
 * @str: string input
 */

void puts_half(char *str)
{
	int len = _strlen(str);
	int start;
	int result;

	if (len % 2 == 0)
	{
		start = len / 2;
	}
	else
	{
		start = (len -1) / 2;
	}
	result = str + start;
	_putchar(result);
	_putchar('\n');
}
