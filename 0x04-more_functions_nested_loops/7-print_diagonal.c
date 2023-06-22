#include "main.h"

/**
 * print_diagonal - prints diagonally
 *
 * @n: User input
 *
 * Return: returns void
 */

void print_diagonal(int n)
{
	int a;
	int b;

	if (n <= 0)
		_putcar('\n');
	for (a = 0; a < n; a++)
	{
		for (b = 0; b <= a; b++)
		{
			if (a == b)
			{
				_putchar('\\');
				_putchar('\n');
			}
			else
			{
				_putchar(' ');
			}
		}
	}
}
