#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string input
 */

void rev_string(char *s)
{
	if (s)
	{
		int len;
		int i;
		char temp;

		while (*s != '\0')
		{
			len++;
			s++;
		}
		for (i = 0; i < len / 2; i++)
		{
			temp = s[i];
			s[i] = s[len - i - 1];
			s[len - i - 1] = temp;
		}
	}
}



