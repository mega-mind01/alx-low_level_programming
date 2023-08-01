#include "lists.h"

/**
 * free_listint - frees memory of node
 *
 * @head: pointer to list
 */

void free_listint(listint_t *head)
{
	listint_t *hold;

	while (head != NULL)
	{
		hold = head->next;
		free(head);
		head = hold;
	}
}
