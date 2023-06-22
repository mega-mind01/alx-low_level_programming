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
	char c;
	char d;

	for (c = 0; c < n; c++)
		_putchar(' ');
	_putchar('\\');
	_putchar('\n');
}

