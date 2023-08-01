#include "lists.h"

/**
 * free_listint2 - free memory allocated to a singly linked list
 *
 * @head: pointer to list
 */

void free_listint2(listint_t **head)
{
	listint_t *hold;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		hold = (*head)->next;
		free(*head);
		*head = hold;
	}
	*head = NULL;
}
