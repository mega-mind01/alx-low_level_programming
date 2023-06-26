#include "main.h"

/**
 * puts2 - prints everyother digit
 *
 * @str: string input
 */

void puts2(char *str)
{
	int i = 0;
	int j = 0;
	char *y = str;
	int k;

	while (*y != '\0')
	{
		y++;
		i++;
	}
	j = i - 1;
	for (k = 0; k <= j; k++)
	{
		if (k % 2 == 0)
		{
			_putchar(str[k]);
		}
	}
	_putchar('\n');
}
