#include <stdlib.h>
#include "main.h"

/**
 * count_word - recursive number count
 *
 * @s: char input
 *
 *Return: count
 */

int count_word(char *s)
{
	int emb, i, j;

	emb = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if  (s[i] == ' ')
			emb = 0;
		else if (emb == 0)
		{
			emb = 1;
			j++;
		}
	}
	return (j);
}
/**
 * strtow - splints strings
 *
 * @str: string input
 *
 * Return: pointer
 */

char **strtow(char *str)
{
	char **pptr, *ptr;
	int i;
	int j = 0;
	int l = 0;
	int w;
	int a = 0;
	int on, off;

	while (*(str + l))
		l++;
	w = count_word(str);
	if (w == 0)
		return (NULL);
	pptr = (char **) malloc((w + 1) * sizeof(char *));
	if (pptr == NULL)
		return (NULL);
	for (i = 0; i <= l; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (a)
			{
				off = i;
				ptr = (char *) malloc((a + 1) * sizeof(char));
				if (ptr == NULL)
					return (NULL);
				while (on < off)
					*ptr++ = str[on++];
				*ptr = '\0';
				pptr[j] = ptr - a;
				j++;
				a = 0;
			}
		}
		else if (a++ == 0)
			on = i;
	}
	pptr[j] = NULL;
	return (pptr);
}
