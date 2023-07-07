#include "main.h"

/**
 * _memset - replace with desired value
 *
 * @s: pointer adress to desired input
 * @b: the replacement value
 * @n: byte value to be replaced
 *
 * Return: updated array
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	while (n > 0)
	{
		s[a] = b;
		a++;
		n--;
	}
	return (s);
}
