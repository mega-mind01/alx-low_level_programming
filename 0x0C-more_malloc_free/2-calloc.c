#include <stdlib.h>
#include "main.h"

/**
 * _memset - sets memory
 *
 * @s: string input
 * @b: replacement string
 * @n: num of byte
 *
 * Return: updates string
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	while (n > 0)
	{
		s[a] = b;
		a++;
		n--;
	}
	return (s);
}

/**
 * _calloc - allocates memory to an array
 *
 * @nmemb: memberes of array
 * @size: size of array
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr != NULL)
		_memset(ptr, 0, nmemb * size);
	return (ptr);
}
