#include <stdio.h>

/**
 *  main - Entry point of the program
 *
 *  Return: returns 0
 */

int main(void)
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = i + 1; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
