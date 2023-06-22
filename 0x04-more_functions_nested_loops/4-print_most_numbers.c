#include "main.h"

/**
 * print_most_numbers - Prints most numbers
 *
 * Return: returns void
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == '2')
		{
			continue;
		}
		if (i == '4')
		{
			continue;
		}
	}
	_putchar('\n');
}
