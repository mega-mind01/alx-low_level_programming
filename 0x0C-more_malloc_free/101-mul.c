#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * is_digit - checks digit
 *
 * @s: string value
 *
 * Return: o on success
 */

int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/**
 * _strlen - calculates length
 *
 * @s: string nput
 *
 * Return: returns length
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * errors - prints error message
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - Entry point of program
 *
 * @argc: count
 * @argv: vector
 *
 * Return: void
 */

int main(int argc, char *argv[])
{
	char *s1, *s2;
	int l1, l2, l, a, m = 0, n1, n2, *p, b = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	l1 = _strlen(s1);
	l2 = _strlen(s2);
	l = l1 + l2 + 1;
	p = malloc(l * sizeof(int));
	if (!p)
		return (1);
	for (a = 0; a <= l1 + l2; a++)
		p[a] = 0;
	for (l1 = l1 - 1; l1 >= 0; l1--)
	{
		n1 = s1[l1] - '0';
		for (l2 = _strlen(s2) - 1; l2 >= 0; l2--)
		{
			n2 = s2[l2] - '0';
			m += p[l1 + l2 + 1] + (n1 * n2);
			p[l1 + l2 + 1] = m % 10;
			m /= 10;
		}
		if (m > 0)
			p[l1 + l2 + 1] += m;
	}
	for (a = 0; a < l - 1; a++)
	{
		if (p[a])
			b = 1;
		if (b)
			_putchar(p[a] + '0');
	}
	if (!b)
		_putchar('0');
	_putchar('\n');
	free(p);
	return (0);
}
