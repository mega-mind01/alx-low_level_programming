#include "main.h"

/**
 * _strlen - counts length of string
 *
 * @s: pointer to string
 *
 * Return: string count
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
/**
 * binary_to_uint - converts binary to a decimal
 *
 * @b: pointer to inputed binary value
 *
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int new;
	int sum;
	int l;

	new = 0;
	sum = 1;

	if (b == NULL)
		return (0);
	l = _strlen(b);
	for (i = l - 1; i >= 0; i--)
	{
		if (b[i] == "1")
			new += sum;
		else if (b[i] != "0")
			return (0);
		sum *= 2;
	}
	return (new);
}
