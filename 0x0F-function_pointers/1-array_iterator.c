#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - loops over array and pass to function
 * @array: array input
 * @size: size of array
 * @action: secondary function
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
