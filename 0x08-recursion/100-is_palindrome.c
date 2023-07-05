#include "main.h"

/**
 * _strlen_recursion - finds length
 *
 * @s: string input
 *
 * Return: int value
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}

/**
 * is_palid_rec - checks for equality
 *
 * @s: string input
 * @b: index 1
 * @c: index 2
 *
 * Return: 1 if equal 0 if not
 */

int is_palid_rec(char *s, int b, int c)
{
	if (b == c)
		return (1);
	if (b == c - 1)
		return (s[b] == s[c]);
	if (s[b] != s[c])
		return (0);
	return (is_palid_rec(s, b + 1, c - 1));
}

/**
 * is_palindrome - checks a string
 *
 * @s: pointer to string
 *
 * Return: returns 1 if string is palidrome else 0
 */

int is_palindrome(char *s)
{
	int l;

	l = _strlen_recursion(s);
	if (l == 0 || *s != s[l - 1])
		return (0);
	return (is_palid_rec(s, 0, l - 1));
}
