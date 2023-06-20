#include "main.h"

/**
 * print_times_table - prints the numerical times table
 *
 * @n: number from 0 - 15
 *
 * Return: return void
 */

void print_times_table(int n)
{
	int a;
	int b;
	int ab;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar(48);
			for (b = 1; b <= n; b++)
			{
				ab = a * b;
				_putchar(44);
				_putchar(32);
				if (ab <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(ab + 48);
				}
				else if (ab <= 99)
				{
					_putchar(32);
					_putchar((ab / 10) + 48);
					_putchar((ab % 10) + 48);
				}
				else
				{
					_putchar(((ab / 100) % 10) + 48);
					_putchar(((ab / 10) % 10) + 48);
					_putchar((ab % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}

