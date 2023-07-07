#include "main.h"

/**
 * _isupper - checks upper case letters
 *
 * @c: The character is ASCII
 *
 * Return: returns 1 for upper and 0 for ithers
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
