#include "main.h"

/**
 * _abs - Prints absolute value of an integer
 *
 * @i: integer value of input
 * Return: The absolute value
 */

int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
