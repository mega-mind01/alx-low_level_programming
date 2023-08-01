#include "lists.h"

/**
 * delete_nodeint_at_index - deletes given node
 *
 * @head: pointer to list
 * @index: index of node to be deleted
 *
 * Return: pointer to new list
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr;
	listint_t *tem;
	unsigned int i;

	ptr = *head;
	tem = NULL;
	i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tem);
		return (1);
	}

	while (i < index - 1)
	{
		if (!ptr || !(ptr->next))
			return (-1);
		ptr = ptr->next;
		i++;
	}
	tem = ptr->next;
	ptr->next = tem->next;
	free(tem);

	return (1);
}
