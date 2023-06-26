@include "main.h"
/**
* swap_int - Swaps the value of a and b
*
* @a: integer 1
* @b: integer 2
*/

void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
