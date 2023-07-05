#include "main.h"

/**
 * sqrtof - finds square root
 *
 * @a: input
 * @b: matching int
 * Return: int
 */

int sqrtof(int a, int b)
{
	if (a <= 0)
		return (-1);
	if (a * a == b)
		return (a);
	return (sqrtof(a - 1, b));
}
/**
 * _sqrt_recursion - finds squareroot
 *
 * @n: int input
 *
 * Return: int value
 */

int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	return (sqrtof(n / 2, n));
}

/**
 * is_prime_number - finds prime number
 *
 * @n: input
 *
 * Return: int value
 */

int is_prime_number(int n)
{
	if (n <= 1 || _sqrt_recursion(n) >= 1)
		return (0);
	if (_sqrt_recursion(n) == -1)
		return (1);
	return (_sqrt_recursion(n));
}
