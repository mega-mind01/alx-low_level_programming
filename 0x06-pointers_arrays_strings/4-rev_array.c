#include "main.h"

/**
 * reverse_array - reverses an array
 *
 * @a: array name
 * @n: arguement from main
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
