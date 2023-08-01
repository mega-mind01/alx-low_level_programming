#include "lists.h"

/**
 * free_listint_safe - free list
 *
 * @h: pointer to linked list
 *
 * Return: count of list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t l;
	int min;
	listint_t *tem;

	l = 0;
	if (!h || !*h)
		return (0);
	while (*h)
	{
		min = *h - (*h)->next;

		if (min > 0)
		{
			tem = (*h)->next;
			free(*h);
			*h = tem;
			l++;
		}
		else
		{
			free(*h);
			*h = NULL;
			l++;
			break;
		}
	}
	*h = NULL;
	return (l);
}
