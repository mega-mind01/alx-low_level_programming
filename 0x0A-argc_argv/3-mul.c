#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * @argc: count
 * @argv: vector
 *
 * Return: 0 int
 */

int main(int argc, char *argv[])
{
	int i, j, k;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	/* atoi: converts string*/
	i = atoi(argv[1]);
	j = atoi(argv[2]);

	k = i * j;
	printf("%d\n", k);
	return (0);
}
