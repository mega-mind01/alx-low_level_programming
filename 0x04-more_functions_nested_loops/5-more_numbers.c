#include "main.h"

/**
 * more_numbers - prints a range of numbers from o-14
 *
 * Return: returnx 10x the range
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = '0'; i <= '9'; i++)
	{
		for (jj = '0'; j <= '9'; j++)
		{
			_putchar(j);
		}
		for (j = 'A'; j <= 'E'; J++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
