#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array
 *
 * @min: minimum
 * @max: maximum
 *
 * Return: An array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);
	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= max - min; i++)
		ptr[i] = min + i;
	return (ptr);
}
