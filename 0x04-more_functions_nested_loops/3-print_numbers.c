#include "main.h"

/**
 * print_numbers - returns value of 0-9
 *
 * Return: returns int
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
