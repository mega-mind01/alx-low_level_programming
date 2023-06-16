#include <stdio.h>

/**
 * main - Entry point for the program
 *
 * Return: return 0
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'e')
		{
			continue;
		}
		if (letter == 'q')
		{
			continue;
		}

		putchar(letter);
	}
	putchar('\n');
	return (0);
}
