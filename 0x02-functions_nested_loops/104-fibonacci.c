#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Return: return 0
 */

int main(void)
{
	unsigned long int i;
	unsigned long int b = 1;
	unsigned long int c = 2;
	unsigned long int d = 1000000000;
	unsigned long int b1;
	unsigned long int b2;
	unsigned long int c1;
	unsigned long int c2;

	printf("%lu", b);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", c);
		c += b;
		b = c - b;
	}
	b1 = (b / d);
	b2 = (b % d);
	c1 = (c / d);
	c2 = (c % d);

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", c1 + (c2 / d));
		printf("%lu", c2 % d);
		c1 = c1 + b1;
		b1 = c1 - b1;
		c2 = c2 + b2;
		b2 = c2 - b2;
	}
	printf("\n");

	return (0);
}
