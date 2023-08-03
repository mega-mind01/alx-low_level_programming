#include "main.h"
/**
 * print_binary - converts a decimal to it's binary form
 *
 * @n: deimal value
 */

void print_binary(unsigned long int n)
{
	int i, sum;
	unsigned long int num;

	sum = 0;
	for (i = 63; i >= 0; i--)
	{
		num = n >> i;
		if (num & 1)
		{
			_putchar('1');
			sum++;
		}
		else if (sum)
			_putchar('0');
	}
	if (!sum)
		_putchar('0');
}
