#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point of program
 *
 * @argc: count
 * @argv: vector
 *
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int q, w, add = 0;

	for (q = 1; q < argc; q++)
	{
		for (w = 0; argv[q][w] != '\0'; w++)
		{
			if (!isdigit(argv[q][w]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[q]);
	}
	printf("%d\n", add);
	return (0);
}
