#include "main.h"

/**
 * _isdigit - Checks for digit
 *
 * @c: The ACII character
 *
 * Return: Returns 1 for digit and 0 for others
 */

int _isdigit(int c)
{
	for (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
