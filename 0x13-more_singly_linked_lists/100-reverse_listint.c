#include "lists.h"

/**
 * reverse_listint - reverses the nodes is a singly linked list
 *
 * @head: pointer to list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next;
	listint_t *prev;
	listint_t *tem;

	tem = *head;
	next = NULL;
	prev = NULL;

	while (tem != NULL)
	{
		next = tem->next;
		tem->next = prev;
		prev = tem;
		tem = next;
	}
	*head = prev;
}
