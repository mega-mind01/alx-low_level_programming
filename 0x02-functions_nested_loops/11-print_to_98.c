#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prnts natural numbers
 *
 * @n: Input
 *
 * Return: void
 */

void print_to_98(int n)
{
	int a;
	int b;

	if (a <= 98)
	{
		for (a = 0; a <= 98; a++)
		{
			if (a != 98)
			{
				printf("%d, ", a);
			}
			else if (a == 98)
			{
				printf("%d\n", a);
			}
		}
	}
	else if (n >= 98)
	{
		for (b = 0; b >= 98; b--)
		{
			if (b != 98)
			{
				printf("%d, ", b);
			}
			else if (b == 98)
			{
				printf("%d\n", b)
			}
		}
	}
}
