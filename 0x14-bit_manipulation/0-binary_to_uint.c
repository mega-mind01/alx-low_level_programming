#include "main.h"

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
	int i;

	new = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] == '1' || b[i] == '0')
			new = 2 * new + (b[i] - '0');
		else if (b[i] != '0' || b[i] != '1')
			return (0);
	}
	return (new);
}
