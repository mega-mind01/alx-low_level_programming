#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array
 *
 * @size: byte size to allocate
 * @c: Character value
 *
 * Return: Null if empty or pointer to address of array
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(size * sizeof(char));
	if (ptr == 0 || size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
