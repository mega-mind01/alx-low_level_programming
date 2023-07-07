#include "main.h"

/**
 * _memcpy - Copies memory area
 *
 * @dest: location for copied value
 * @src: location for source value
 * @n: byte to be copied from source
 *
 * Return: return dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
