#include "main.h"

/**
 * print_line - prints a line
 *
 * @n: number of line
 *
 * Return: returns void
 */

void print_line(int n)
{
	char i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
