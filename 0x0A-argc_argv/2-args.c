#include <stdio.h>

/**
 * main - Entry point of program
 *
 * @argc: Count
 * @argv: vector
 *
 * Return: 0 indicates success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc - 1; 1++)
	{
		printf("%s\n", argv[i]);
		return (0);
	}
}
