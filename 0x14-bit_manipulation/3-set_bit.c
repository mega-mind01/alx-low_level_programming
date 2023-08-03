#include "main.h"

/**
 * set_bit - set bit at a particular index in a binary
 *
 * @n: pointer to binary
 * @index: index to manipulte
 *
 * Return: new binary
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;

	if (index > 63)
		return (-1);
	num = 1UL << index;
	*n |= num;
	return (1);
}
