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
		int len = 0;
		char *end = s;
		char temp;

		while (*end != '\0')
		{
			len++;
			end++;
		}
		end--;
		while (s < end)
		{
			temp = *s;
			*s = *end
			* end = temp;
			s++;
			end--;
		}
	}
}



