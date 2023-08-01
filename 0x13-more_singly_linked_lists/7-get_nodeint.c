#include "lists.h"

/**
 * get_nodeint_at_index - returns a particular node in a list
 *
 * @head: pointer to list
 * @index: index of node to get
 *
 * Return: selected node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *new;
	unsigned int n;

	new = head;
	n = 0;
	while (new != NULL)
	{
		if (n == index)
			return (new);
		n++;
		new = new->next;
	}
	return (new);
}
