#include "main.h"

/**
 * print_last_digit - Prints last digit of a number
 *
 * @n: Integer character of input
 *
 * Return: returns result
 */

int print_last_digit(int n)
{
	int m;

	m = n % 10;
	_putchar(m + '0');
	_putchar('\n');
	return (m);
}
