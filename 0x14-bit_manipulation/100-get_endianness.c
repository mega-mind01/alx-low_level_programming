#include "main.h"

/**
 * get_endianness - ges a machine size
 *
 * Return: 1 or 0
 */

int get_endianness(void)
{
	unsigned int a = 1;
	char *ptr = (char *) & a;

	return (*ptr);
}

