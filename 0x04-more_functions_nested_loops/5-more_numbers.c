#include "main.h"

/**
 * more_numbers - prints a range of numbers from o-14
 *
 * Return: returnx 10x the range
 */

void more_numbers(void)
{
	int i;
	char j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}
			else
			{
				_putchar(j + '0');
			}
		}
		_putchar('\n');
	}
}
