#include "main.h"

/**
 *string_toupper - makes string in all caps
 *
 *@n: string arguement
 *Return: returns caps n
 *
 */

char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 97 && n[i] <= 122)
		{
			n[i] = n[i] - 32;
		}
		i++;
	}
	return (n);
}
