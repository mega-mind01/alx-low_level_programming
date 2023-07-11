#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates arguement
 * @ac: argument count
 * @av: pointer to argument
 *
 * Return: pointer to new allocated memory
 */

char *argstostr(int ac, char **av)
{
	char *ptr;
	int i;
	int j;
	int k;
	int len;

	if (ac == 0 || av == NULL)
		return (NULL);
	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}
	len++;
	ptr = malloc(len * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptr[k++] = av[i][j];
		}
		ptr[k++] = '\n';
	}
	ptr[k] = '\0';
	return (ptr);
}
