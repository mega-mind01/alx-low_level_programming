#include <stdio.h>

/**
 * _strcpy - copes the value of a variable
 *
 * @dest: out pur location
 * @src: source location
 *
 * Return: return copy
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;

	for (; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}

