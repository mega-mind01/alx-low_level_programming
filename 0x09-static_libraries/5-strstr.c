#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: locate a substring
 * @needle: value to locate substring
 *
 * Return: returns pointer and null if not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *i = haystack;
	char *j = needle;

	while (*i)
	{
		j = needle;
		i = haystack;
		while (*j)
		{
			if (*i == *j)
			{
				j++;
				i++;
			}
			else
				break;
		}
		if (*j == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
