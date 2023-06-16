#include <stdio.h>

/**
 *  main - Entry point of program
 *
 *  Return: return 0
 */

int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar(number + '0');

		if (number != 9)
		{
			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');

	return (0);
}
