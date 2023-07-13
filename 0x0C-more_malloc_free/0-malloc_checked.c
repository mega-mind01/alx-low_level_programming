#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - appoints an address
 *
 * @b: desired input
 *
 * Return: pointer address on success or NULLotherwise
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
