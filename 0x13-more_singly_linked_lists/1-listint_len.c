#include "lists.h"

/**
 * listint_len - counts node in a list
 *
 * @h: pointer to list
 *
 * Return: count of nodes
 */

size_t listint_len(const listint_t *h)
{
	int count;
	const listint_t *temp;

	if (h == NULL)
		return (0);
	count = 0;
	temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
