#include "main.h"

/**
 * sqrtfinder - finds square root
 *
 * @on:start of input
 * @off: end of input
 * @n: passed input
 * Return: returns int
 */

int sqrtfinder(int on, int off, int n)
{
	long a;

	if (off >= on)
	{
		a = on + (off - on) / 2;
		if (a * a == n)
			return (a);
		if (a * a >  n)
			return (sqrtfinder(on, a - 1, n));
		if (a * a < n)
			return (sqrtfinder(a + 1, off, n));
	}
	return (-1);
}

/**
 * _sqrt_recursion - finds squareroot
 *
 * @n: int input
 * Return: int value
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (sqrtfinder(2, n, n));
}
