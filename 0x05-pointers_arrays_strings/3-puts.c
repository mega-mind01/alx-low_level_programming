#include "main.h"
/**
 * _puts - Prints to the stdout
 *
 *@str: The string value
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		str++;
		_putchar(*str);
	}
}
