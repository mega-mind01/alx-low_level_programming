#include "main.h"

/**
 *_strncat - concatenates a given byte of n
 *
 * @dest: string 1
 * @src: string 2
 * @n: number of byte to append
 *
 * Return: return dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (i != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && j != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
