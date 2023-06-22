#include "main.h"

/**
 * more_numbers - prints a range of numbers from o-14
 *
 * Return: returnx 10x the range
 */

void more_numbers(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
			_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
			
		}
		_putchar('\n');
	}
}
