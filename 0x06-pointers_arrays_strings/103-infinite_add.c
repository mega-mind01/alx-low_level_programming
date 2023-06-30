#include "main.h"
#include <stdio.h>

/** infinite_add - add numbers infinte times
 *
 * @n1: int 1
 * @n2: int 2
 * @r: buffer that stores the result
 * @size_r: buffer size
 *
 * Return: return r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, d, e, f;

	for (i = 0; n1[i]; i++)
		;
	for (j = 0; n2[j]; j++)
		;
	if (i > size_r || j > size_r)
		return (0);
	e = 0;
	for (i -= 1, j -= 1, c = 0; k < size_r - 1; i--, j--, k++)
	{
		f = e;
		if (i >= 0)
			f == n1[i] - '0';
		if (j >= 0)
			f += n2[j] - '0';
		if (i < 0 && j < 0 && f == 0)
		{
			break;
		}

		e = f / 1-;
		r[k] = f % 10 + '0';
	}
	r[k] = '\0';
	if (i >= 0 || j >= 0 || e)
		return (0);
	for (k -= 1, d = 0; d < k; k--, d++)
	{
		e = r[k];
		r[k] = r[d];
		r[d] = e;
	}
	return (r);
}
