#include <stdio.h>

/**
 *  main - Entry point of program
 *
 *  Return: return 0
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
