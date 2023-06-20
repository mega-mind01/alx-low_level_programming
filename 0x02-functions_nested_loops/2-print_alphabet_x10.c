#include "main.h"

/**
 * print_alphabet_x10 - prints the letters in lower case 10x
 *
 * Returns: returns void
 */

void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
