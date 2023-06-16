#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: returns 0
 */

int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar('0' + number);
	}
	putchar('\n');

	return (0);
}
