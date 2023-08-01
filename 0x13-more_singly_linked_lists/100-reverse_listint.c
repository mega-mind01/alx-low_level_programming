#include "lists.h"

/**
 * reverse_listint - reverses the nodes is a singly linked list
 *
 * @head: pointer to list
 *
 * Return: reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next;
	listint_t *prev;

	next = NULL;
	prev = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
