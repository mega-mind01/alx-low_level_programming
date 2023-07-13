#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates memory
 *
 * @ptr: pointer address
 * @old_size: prev size
 * @new_size: new size
 *
 * Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pptr;
	char *cptr;
	unsigned int size;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	pptr = malloc(new_size);
	if (!pptr)
		return (NULL);
	cptr = ptr;
	if (new_size < old _size)
	{
		for (size = 0; size < new_size; size++)
			pptr[size] = cptr[size];
	}
	if (new_size > old_size)
	{
		for (size = 0; size < old_size; size++)
			pptr[size] = cptr[size];
	}
	free(ptr);
	return (pptr);
}
