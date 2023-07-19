#include <stdio.h>
#include <stdlib.h>

/**
 * main - print upcode of it's file
 *
 * @argc: argument count
 * @argv: argumrnt vector
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int byte, i;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	byte = atoi(argv[1]);
	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}
	array = (char *)main;
	for (i = 0; i < byte; i++)
	{
		if (i == byte - 1)
		{
			printf("%02hhx\n", array[i]);
			break;
		}
		printf("%02hhx ", array[i]);
	}
	return (0);
}
