#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints name and pass name to another function provided by user
 *
 * @name: string input by user
 * @f: pointer to other function
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
