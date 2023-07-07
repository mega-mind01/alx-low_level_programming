#include "main.h"

/**
 * _strlen - Calculates length
 *
 *@s: Character addresss
 *
 * Return: returns length of character
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
