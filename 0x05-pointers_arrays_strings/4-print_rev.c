#include "main.h"

/**
 *rev_string - reverse given string
 *
 *@s: string input
 */

void rev_string(char *s)
{
	int len = 0;
	int i;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
