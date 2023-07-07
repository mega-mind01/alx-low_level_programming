#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - locates a bite in a given string
 *
 * @s: string value
 * @accept: byte value to be located
 *
 * Return: pointer address if found or null
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int a;
	unsigned int b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
				return (&s[a]);
		}
	}
	return (NULL);
}
