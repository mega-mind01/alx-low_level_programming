#include <stdio.h>

/**
 * _strcpy - copes the value of a variable
 *
 * @dest: out pur location
 * @src: source location
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] != '\0'; i++)
	{
		dest[i] == src[i];
	}
	dest[i] = '\0';
	return (dest);
}

