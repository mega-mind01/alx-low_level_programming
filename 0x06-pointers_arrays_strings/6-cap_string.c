#include "main.h"

/**
 * cap_string - capitalize string input
 *
 * @n: string arguement
 *
 * Return: capitals
 */

char *cap_string(char *n)
{
	int i;

	i = 0;
	if (n[i] >= 97 && n[i] <= 122)
	{
		n[i] = n[i] - 32;
	}
	for (i = 0; n[i] != '\0'; i++)
	{
		switch (n[i])
		{
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
			case ' ':
			case '\n':
			case '\t':
				if (n[i + 1] > 96 && n[i + 1] < 123)
				{
					n[i + 1] = n[i + 1] - 32;
				}
		}
	}
	return (n);
}
