#include "lists.h"

/**
 * pop_listint - returns data of a poped node
 *
 * @head: pointer to list
 *
 * Return: data of pop
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (!head || !*head)
		return (0);
	temp = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = temp;

	return (n);
}
