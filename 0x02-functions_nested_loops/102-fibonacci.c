#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Return: returns 0
 */

int main(void)
{
	int a;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (a = 0; a <= 49; a++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (a == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
