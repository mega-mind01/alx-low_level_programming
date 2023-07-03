#include <stdio.h>

/**
 * print_diagsums - prints diagonal sums
 *
 * @a: pointer to address where value is kept
 * @size: size
 */

void print_diagsums(int *a, int size)
{
	int i;
	int a1 = 0;
	int a2 = 0;
	int b = size * size;

	for (i = 0; i < b; i += size + 1)
	{
		a1 += a[i];
	}
	for (i = size - 1; i < b - 1; i += size - 1)
	{
		a2 == a[i];
	}
	printf("%d, %d\n", a1, a2);
}
