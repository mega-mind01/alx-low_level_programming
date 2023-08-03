#include "main.h"

/**
 * flip_bits - gets bit diff
 *
 * @n: first number
 * @m: second number
 *
 * Return: number of bit
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, num;
	unsigned long int number, diff;

	num = 0;
	diff = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		number = diff >> i;
		if (number & 1)
			num++;
	}
	return (num);
}
