#include "main.h"

/**
 * clear_bit - sets bit at a given binary index to 0
 *
 * @n: pointer to binary
 * @index: index to manipulate
 *
 * Return: int 1 on success
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;

	if (index > 63)
		return (-1);
	num = (~(1UL << index));
	*n &= num;

	return (1);
}
