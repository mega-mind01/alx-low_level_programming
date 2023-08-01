#include "lists.h"

/**
 * insert_nodeint_at_index - adds a new node to a given index
 *
 * @head: pointer to list
 * @idx: index input
 * @n: new data to be inputed
 *
 * Return: pointer to new list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr;
	listint_t *new;
	unsigned int i;

	ptr = *head;
	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	i = 1;
	while (ptr != NULL)
	{
		if (i == idx)
		{
			new->next = ptr->next;
			ptr->next = new;
			return (new);
		}
		i++;
		ptr = ptr->next;
	}
	return (NULL);
}
