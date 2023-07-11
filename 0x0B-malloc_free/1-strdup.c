#include <stdlib.h>
#include "main.h"

/**
 * _strdup - copies a string to new memory
 *
 * @str: string input
 *
 * Return: null if no success otherwise pointer
 */

char* _strdup(char* str)
{
	int len;
	char *ptr;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	ptr = malloc((len + 1) * sizeof(char));
	if (ptr != NULL)
	{
		for (i = 0; i < len; i++)
		{
			ptr[i] = str[i];
		}
		ptr[i] = '\0';
	}
	return (ptr);
}
