#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
#include "3-calc.h"

/**
 * main - calculates operations
 *
 * @argc: arguement count
 * @argv: arguement passed
 *
 * Return: 0 on success
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int f1, f2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	f1 = atoi(argv[1]);
	op = argv[2];
	f2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && f2 == 0) || (*op == '%' && f2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printtf("%d\n", get_op_func(op)(f1, f2));

	return (0);
}
