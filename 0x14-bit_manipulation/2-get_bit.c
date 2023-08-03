#include "main.h"
/**
 * get_bit - collects a bit value from a binary index
 *
 * @n: deimal value
 *
 * @index: required index to check
 *
 * Return: bit value at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index == NULL || index > 63 || n == NULL)
		return (-1);
	bit = (n >> index) & 1;

	return (bit);
}
