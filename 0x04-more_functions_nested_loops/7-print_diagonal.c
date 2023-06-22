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
	int i;
	int j;

	if (n <= 0)
	{
		_putcar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				_putchar('\\');
			}
			_putchar('\n');
		}
	}
}
