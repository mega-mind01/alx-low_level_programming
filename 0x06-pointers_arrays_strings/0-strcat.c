#include "main.h"

/**
 * _strcat - concatenates two string
 *
 * @dest: string 1
 * @src: string 2
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (i != '\0')
	{
		i++;
	}
	j = 0;
	while (j != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
